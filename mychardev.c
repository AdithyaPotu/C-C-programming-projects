#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/uaccess.h>

#define DEVICE_NAME "mychardev"
#define BUF_SIZE 1024

static char buffer[BUF_SIZE];
static int buffer_length = 0;

static int device_open(struct inode *inode, struct file *file)
{
	printk(KERN_INFO "Device opened\n");
	return 0;
}

static int device_release(struct inode *inode, struct file *file)
{
	printk(KERN_INFO "Device released\n");
	return 0;
}

static ssize_t device_read(struct file *file, char __user *user_buffer,
		size_t length, loff_t *offset)
{
	int bytes_read = 0;

	if (*offset >= buffer_length)
		return 0;

	if (*offset + length > buffer_length)
		length = buffer_length - *offset;

	if (copy_to_user(user_buffer, buffer + *offset, length))
		return -EFAULT;

	*offset += length;
	bytes_read = length;

	printk(KERN_INFO "Read %d bytes from device\n", bytes_read);
	return bytes_read;
}

static ssize_t device_write(struct file *file, const char __user *user_buffer,
		size_t length, loff_t *offset)
{
	int bytes_written = 0;

	if (*offset + length > BUF_SIZE)
		return -ENOSPC;

	if (copy_from_user(buffer + *offset, user_buffer, length))
		return -EFAULT;

	*offset += length;
	bytes_written = length;

	buffer_length = *offset;

	printk(KERN_INFO "Written %d bytes to device\n", bytes_written);
	return bytes_written;
}

static struct file_operations fops = {
	.open = device_open,
	.release = device_release,
	.read = device_read,
	.write = device_write,
};

static int __init chardev_init(void)
{
	int result;
	printk("The char driver is initialized\n");
	result = register_chrdev(0, DEVICE_NAME, &fops);
	if (result < 0) {
		printk(KERN_ALERT "Failed to register character device\n");
		return result;
	}

	printk(KERN_INFO "Character device registered\n");
	return 0;
}

static void __exit chardev_exit(void)
{
	printk("the char driver exited\n");
	unregister_chrdev(0, DEVICE_NAME);
	printk(KERN_INFO "Character device unregistered\n");
}

module_init(chardev_init);
module_exit(chardev_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("adithya");
MODULE_DESCRIPTION("A simple character driver");

