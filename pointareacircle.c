#include<stdio.h>
#define PI 3.14
int main()
{
int r,area;//radius
int *p,*a;//pointers for area and radius
printf("\nEnter the radius:");
scanf("%d",&r);
a=&area;
p=&r;
*a=(PI*((*p)*(*p)));
printf("radius:%d,area of circle:%d",*p,*a);
return 0;
}

