#include<stdio.h>
int main()
{
	int i,j,n1,n2,flag=0;
	printf("\nEnter the range:");
	scanf("%d%d",&n1,&n2);
	printf("\nthe primenum between n1&n2:");
	for(i=n1+1;i<=n2;i++)//interval range
	{
		flag=0;
		for(j=2;j<=i/2;j++) // checking prime or not
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("\n%d",i);
			if((i%7==0)||(i%10==7))
			{
				printf("\nfor7:%d",i);
			}
		}
	}
	return 0;
}

