#include<stdio.h>
int linearsearch(int a[],int ele,int len)
{
	for(int i=0;i<len;i++)
	{
		if(a[i]==ele)
		{
			return i;
		} 
	}
	return -1;		
}

int binarysearch(int a[],int ele,int low,int high)
{
	while(low<high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]==ele)
			return mid;
		if(a[mid]<ele)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return -1;
}
int main()
{
	int a[50],b,ch,result,i,ele;
	printf("\nenter num of ele:");
	scanf("%d",&b);
	printf("\nenter the array");
	for(i=0;i<b;i++)
	{

		scanf("%d",&a[i]);
	}
	printf("Enter element to be search:");
	scanf("%d",&ele);
	int n=(sizeof(a)/sizeof(a[0]));
	printf("Enter your choice:\n1.Linear search\n2.Binary search:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			result = linearsearch(a,ele,n);
			if(result==-1){
				printf("element not found");
			}

			else{
				printf("element found at:%d",result);
			}

			break;

		case 2:
			result=binarysearch(a,ele,0,b-1);
			if(result==-1){
				printf("element not found");
			}                 
			else{
				printf("element found at %d",result);
			}
			break;
	}
	return 0;
}

