#include<stdio.h>
int main()
{
	int a[50],size,a1[50],a2[50],i,pos,j=0,k=0,l,m,temp;
	printf("Enter the size of arr:");
	scanf("%d",&size);
	printf("\nEnter the array:\n");
	for(i=0;i<size;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\nenter the pos:");
	scanf("%d",&pos);
	for(i=0;i<size;i++)
	{
		if(i<pos)
		{
			a1[j++]=a[i];
		}
		else
		{
			a2[k++]=a[i];
		}
	}
	printf("\nElements of a1:");
	printf("\n");
	for(i=0;i<j;i++)
	{
		printf("%d ",a1[i]);
	} 
	printf("\nsorting a1");
	for(i=0;i<j;i++)
	{ 
		for(l=0;l<i;l++)
		{	
			if(a1[i]<a1[l])
			{
				/*temp=a1[i];
				a1[i]=a1[l];
				a1[l]=temp;*/
				a1[i]^=a1[l]^=a1[i]^=a1[l];
			}
		}
	}
	printf("\n");
	for(i=0;i<j;i++)
	{
		printf("%d ",a1[i]);
	}
	printf("\nElements of a2:");
	printf("\n");
	for(i=0;i<k;i++)
	{

		printf("%d ",a2[i]);
	}
	printf("\nsorting a2:");
	for(i=0;i<k;i++)
	{
		for(m=0;m<i;m++){
			if(a2[i]<a2[m])
			{
				/*temp=a2[i];
				a2[i]=a2[m];
				a2[m]=temp;*/
				a2[i]^=a2[m]^=a2[i]^=a2[m];
			}	
		}
	}
	printf("\n");
	for(i=0;i<k;i++)
	{
		printf("%d ",a2[i]);
	}
printf("\n");
}
