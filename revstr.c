#include<stdio.h>
#include<string.h>
int main()
{
	int i,l;
	char str1[50];
	char revstr[50];
	scanf("%s",str1);
	l=strlen(str1);
	printf("\n%d",l);
	for(i=0;i=l-1;i++)
	{	
	
 		revstr[i]=str1[l-i];
		i++;
		l--;
	}
	//break;
	//	revstr[j]='\0';
	printf("\n%s",revstr);
}
