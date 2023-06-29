#include<stdio.h>
int areaofrect(int,int);
int main()
{
int length,breadth,area;
int (*fp)(int,int);
printf("\nThe length and breadth of rectangle:");
scanf("%d%d",&length,&breadth);
fp = areaofrect;
area = (*fp)(length,breadth);
printf("\nthe area of rectangle:%d",area);
return 0;
}
int areaofrect(int a,int b)
{
return a*b;
}

