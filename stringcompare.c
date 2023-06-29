#include<stdio.h>

void main()
{
char str1[20];
char str2[20];
int i;
printf("enter first string:");
scanf("%s",&str1);
printf("Enter second string:");
scanf("%s",str2);
while(str1[i]=str2[i]&&str1[i]=="\0")
{
i++;
if(str1[i]>str2[i])
{
printf("str1>str2");
}
else if(str1[i]<str2[i])
{
printf("str1<str2");
}
else
{
printf("str1==str2");
}
}
}

