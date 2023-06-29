#include<stdio.h>
void main()
{

	long int a[100];
	int i,n;
	printf("\nEnter the number of elemnts to fibonacci series:");
	scanf("%d",&n);
	printf("Fibonacci series:");
	a[0]=-1;
	a[1]=1;
	for(i=2;i<=n;i++)
	{
		a[i]=a[i-2]+a[i-1];
		printf("\n%ld",a[i]);
	}
}
