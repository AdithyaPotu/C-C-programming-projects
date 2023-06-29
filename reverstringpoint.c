#include<stdio.h>
#include<string.h>
char reverseString(char* string)
{
    int l, i;
    char *first_ptr, *second_ptr, ch;
    l = strlen(string);
 
    // Setting the first_ptr
    // to start of string
    first_ptr = string;
   
      //Setting the end_ptr the end of
      //the string
    second_ptr = string + l - 1;
 
    // Swap the char from start and end
    // index using first_ptr and second_ptr
    for (i = 0; i < (l - 1) / 2; i++) {
 
        // swap character
        ch =string[*second_ptr];
        string[*second_ptr] = string [*first_ptr];
        string[*second_ptr] = ch;
 
        // update pointers positions
        first_ptr++;
        second_ptr--;
    }
return string;
}
 
// Driver code
int main()
{
 
    // Get the string
    char str[50] = "GeeksForGeeks";
    printf("Enter a string: %s\n", str);
 
    // Reverse the string
    reverseString(str);
 
    // Print the result
    printf("Reverse of the string: %s\n", str);
 
    return 0;
}

