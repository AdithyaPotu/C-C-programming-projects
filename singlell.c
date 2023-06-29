#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}

void create_node(struct node *head,int new_data )
{
int i;
head=NULL;
scanf("%d",&i);
while(i!=1)
{
temp=;
temp.data=i;
temp.next=NULL;
if(head=NULL)
{
head=temp;
current=temp;
}
else
{
current.next=temp;
current=temp;
}

printf("node is created");
