#include<stdio.h>
int main()
{
int n,i,j,prime;
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
}
}
}
return 0;
}

