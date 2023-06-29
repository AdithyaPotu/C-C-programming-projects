#include<stdio.h>
int main()
{
unsigned long long int num;
int bitcount=0,i=0,bit[64];
printf("Enter the num:");
scanf("%lld",&num);
printf("\nNow the no of bits and the binary format are\n");
while(num!=0)
{
bitcount++;
i++;
if(num%2!=0)
{
bit[i]=1;
}
else
{
bit[i]=0;
}
num=num/2;
}
printf("\nbitcount:%d,bits:\n",bitcount);
while(i>0)
{
printf("%d",bit[i]);
i--;
}
}
