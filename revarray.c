#include<stdio.h>
void main()
{
	int a[100],rev[100],i,j,n;
	printf("Enter num of elements:");
	scanf("%d",&n);
	printf("\nEnter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nReverse of the array:");
	for(i=0;i<n;i++)
	{

		rev[i]=a[n-i-1];
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",rev[i]);
	}
}
