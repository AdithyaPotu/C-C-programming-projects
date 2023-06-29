#include<stdio.h>
void main()
{
	int a[100],i,n,min,max;
	printf("\nEnter the Num of Elements:");
	scanf("%d",&n);
	printf("\nEnter elements:");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	for(i=0;i<=n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\nMax=%d",max);
	printf("\nMin=%d",min);
}
