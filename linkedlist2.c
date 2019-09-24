#include<stdio.h>
#include<stdlib.h>

struct node
{
	int value;
	struct node *next;
};
typedef struct node *NODE;

NODE getnode()
{
	NODE x;
	x=(NODE)malloc(sizeof(struct node));
	return x;
	}
 NODE insert_beg(NODE first, int item)
{
	NODE temp;
	temp=getnode();
	temp->value=item;
	temp->next=NULL;
	if(first==NULL)
	return temp;
	else
	{
		temp->next=first;
	}
	first=temp;
	return first;
}


NODE insert_last(NODE first, int item)
{
	NODE x,temp;
	x=getnode();
	x->value=item;
	x->next=NULL;
	temp=first;
	if(first==NULL)
	return x;
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next=x;
	return first;
}


void display(NODE first)
{
	NODE temp=first;
	if(first==NULL)
	printf("LIST IS EMPTY\n");
	while(temp!=NULL)
	{
		printf("%d\n", temp->value);
		temp=temp->next;
	}
}
 
int main()
{
	NODE first;
	int item,a;
	while(1)
	{
		printf("1.insert at the front\n");
		printf("2.insert at end\n");
		printf("3.display\n");
		printf("4.exit\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
			printf("Enter the value\n");
			scanf("%d",&item);
			first=insert_beg(first,item);
			break;
			case 2:
			printf("Enter the value\n");
			scanf("%d",&item);
			first=insert_last(first,item);
			break;
			case 3:
			display(first);
			break;
			case 4:
			exit(0);
			default:
			printf("WRONG CHOICE\n");
		}
	}
	return 0;
}


