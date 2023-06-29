#include<stdio.h>
void main()
{
	int n,temp,r,sum=0;
	printf("\nInput any num:");
	scanf("%d",&n);
	for(temp=n;n!=0;n=n/10)
	{
		r=n%10;
		sum=sum+(r*r*r);
	}
	if(sum==temp)
	{
		printf("%d is armstrong",temp);
	}
	else
	{
		printf("%d is not armstrong",temp);
	}
}
