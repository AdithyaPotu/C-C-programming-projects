#include<stdio.h>
int main()
{
	int n,r,temp=0;
	printf("Enter a num:");
	scanf("%d",&n);
	for(int i=n;i>0;)
	{
		r=i%10;
		temp=(temp*10)+r;
		i=i/10;
	}

	if(temp==n)
	{
		printf("%d palindrome",n);
	}
	else
	{
		printf("%d Not palindrome",n);
	}
	return 0;
}
