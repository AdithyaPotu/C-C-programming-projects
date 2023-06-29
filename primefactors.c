#include<stdio.h>
int main()
{
	int n,i,j,prime, min=0, max;
	printf("\n Enter the Num:");
	scanf("%d",&n);
	printf("\nThe prime factors of%d are:",n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			prime=1;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					prime=0;
					break;
				}
			}
			if(prime==1)
			{
				printf("\n%d",i);
				printf("\nfactorial of prime factor %d is:",i);
				for(max=i;max>0;max--)
				{
					max=i*max;
				}
				printf("\n%d",max);
			}
		}
		if(prime==0)
		{
			printf("\n%d ",max);
		}
		return 0;

	}
}
