#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[50],i,n,pos,c,ch,ele;
	while(1)
	{
		printf("\nHere are the Options:\nEnter 1:Insert the array\n 2: Delete the element\n3.Insert the element\n4.Display the array\n5.quit");
		scanf("%d",&ch);
		switch(ch)
		{
			printf("\nEnter the position:");
			scanf("%d",&pos);
			int ele;
			printf("\nEnter the element:");
			scanf("%d",&ele);

			case 1:
			printf("\nEnter the num of elements:");
			scanf("%d",&n);
			printf("\ninput array of elements:");
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);

			}		
			break;

			case 2:
			printf("\nEnter the position:");
			scanf("%d",&pos);
			printf("\nEnter the element:");
			scanf("%d",&ele);
			if(pos>n+1)
			{
				printf("\nDelete not possible");
			}

			for(i=pos-1;i<n-1;i++)
			{
				a[i]=a[i+1];
			}
			printf("\nArray after deletion:");
			for(i=0;i<n-1;i++)
			{
				printf("%d\n",a[i]);
			}
			break;

			case 3:

			printf("\nEnter the position:");
			scanf("%d",&pos);
			printf("\nEnter the element:");
			scanf("%d",&ele);

			for(i=n-1;i>=pos-1;i--)
			{
				
				//a[i] = a[i - 1];
				a[pos-1]=ele;
 
			}
			printf("\nArray after insertion:");
			for(i=0;i<=n-1;i++)
			{
				printf("%d\n",a[i]);
			}	break;

			case 4:
			{       
				if(sizeof(a)==0)
				{
					printf("\nNo array");
				}
				else
				{
					printf("\nDisplaying the array");
					for(i=0;i<=n-1;i++)
					{
						printf("%d\n",a[i]);
					}
				}		
			}
			break;
			case 5:
				exit(0);       
				break;

			default: 
			{
				printf("\ninvalid choice");	
			}
		}
	}
}
