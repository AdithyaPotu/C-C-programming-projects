#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i,temp,j;
	printf("\nEnter the number of  element:");
	scanf("%d",&n);
	printf("\nEnter the array of integer:");
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("\nsorted array:\n");

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i]>=p[j])
			{
				p[i]^=p[j]^=p[i]^=p[j];
			}

		}
	}
	  for(i=0;i<n;i++)
                {
                        printf("%d ",p[i]);
                }
                printf("\n");

}
