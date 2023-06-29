#include<stdio.h>
#include<string.h>
void main()
{
	int i,j=0,flag;
	char str[50],revstr[50]={"\0"},n=0;
	printf("Enter the string to check whether it is palindrome:");
	scanf("%s",&str);
	n = strlen(str);
	for (i = 0; str[i] != '\0'; i++)

	{

		n++;

	}
	printf("\nThe length of string is :%d",n);
	for(i=0;str[i]<=0;i--)
	{
		revstr[n-i-1]=str[i];
	}
	printf("\nentered string is :%s \nreverse string is :%s",str,revstr);
	flag=1;
	for(i=0;i<n;i++)
	{ 
		if(revstr[i]!=str[i])
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		printf("\n%s:palindrome\n",str);
	}
	else
	{
		printf("\n%s:not palindrome\n",str);
	}

}
