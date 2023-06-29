#include<stdio.h>
#include<string.h>
struct employee{
int id;
char name[40];
float sal;
int age;
};
int main()
{
int *p;
struct employee e;
e.id=1101;
e.sal=250000;
e.age=25;
e.name[40]="aadhya";
printf("id:%d,\nName:%s,\nsalary:%f,age:%d",e.id,e.name,e.sal,e.age);
return 0;
}


