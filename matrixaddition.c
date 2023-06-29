#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],i,j,r,c;
	int sum[50][50];
	printf("\nenter the num of rows and col:");
	scanf("%d%d",&r,&c);
	printf("\nenter the first matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter the element a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n enter the second matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter the element b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nEntered matrix a:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nEntered matrix b:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("\nThe sum is :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=(a[i][j]+b[i][j]);
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
