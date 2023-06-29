#include<stdio.h>
int main()
{
int a[50],i,j,n,temp;
printf("\nEnter the array size:\n");
scanf("%d",&n);
printf("\nEnter the elements:\n");
for(i=0;i<n;i++)
{
printf("Elements a[%d]:\n",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("\nSorted array:\n");

for(i=0;i<n;i++)
{
printf("\t%d",a[i]);
}
}
