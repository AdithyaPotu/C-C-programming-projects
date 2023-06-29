#include<stdio.h>
#include<string.h>
void main()
{
	int i,j=0,flag=0;
	char str[50],str2[50];
	int n;
	printf("Enter the string to check whether it is palindrome:");
	fgets(str,50,stdin);
	n=strlen(str);
	//        str2[n]=str[n];
	for(i=0;str[i]!='\0';++i)
	{
		str2[i]=str[i];	
	}
	printf("\nstring entered:%s",str2);
	for(i=0;i<n/2;i++)
	{
		str[i]^=str[n-i-1]^=str[i]^=str[n-i-1];
	}
	printf("\n reverse of string is:%s",str);
	for(i=0;i<n-1;i++)
	{ 
		//flag=1;
		if(str2[i]==str[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\n %s\tpalindrome",str);
	}
	else
	{
		printf("\n %snot palindrome",str);
	}

}
