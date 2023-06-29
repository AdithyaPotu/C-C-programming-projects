#include<stdio.h>
void main()
{
int n,r,sum=0;
printf("\nEnter the num:");
scanf("%d",&n);
for(int i=0;n!=0;n=n/10)
{
i=n;
r=i%10;
sum=sum+r;
}
printf("sum of digits in %d:%d",n,sum);
}

