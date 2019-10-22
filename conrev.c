#include<stdlib.h>
#include<stdio.h>

struct node
{
int data;
 struct node *next;
};
typedef struct node *Node;

Node getnode()
{
 Node x;
 x=(Node) malloc (sizeof(Node));
 if(x!=NULL)
 return x;
 else
 {
 printf("Memory is not allocated");
 exit(0);
 }
}
Node insert_front(Node head,int item)
{
 Node temp;
 temp=getnode();
 temp->data=item;
 temp->next=head;
 head=temp;
 return head;
}
Node concatinate(Node head1,Node head2)
{
 Node temp;
 if (head1==NULL)
 return head2;
 else if(head2==NULL)
 return head1;
 else{
   temp=head1;
    while(temp->next!=NULL)
   {
     temp=temp->next;
    }
    temp->next=head2;
    return head1;
  }
 }  
 Node sort(Node head){
	int swapped = -1;
	Node curr, last, temp;
	if(head == NULL){
        printf("Linked list is empty");
        return head;
	}
	else{
		
       last = NULL;
	while(swapped != 0){
	swapped = 0;
	curr = head;
	while(curr->next != last){
	if(curr->data > (curr->next)->data){
	temp->data = curr->data; 
	curr->data = (curr->next)->data;
	(curr->next)->data = temp->data;
	}
	swapped = 1;
	curr = curr->next;
	}
	last = curr;
	}
	}
	}
Node reverse(NODE head)
{
Node *curr,*prev,*next;
curr=head;
prev=NULL;
while(curr!=NULL)
{
next=curr->next;
curr->next=prev;
prev=curr;
curr=next;
}
head=prev;
}  

void display(Node head)
{
 Node temp;
 if(head==NULL)
 {
 printf("list is empty\n");
 }
 else
 {
 temp=head;
 printf("Element in the list: ");
 while(temp!=NULL)
 {
 printf("%d ",temp->data);
 temp=temp->next;
 }
 printf("\n");
 }
}
int main()
{
 Node head1=NULL;
 Node head2=NULL;
 int ch,value;
 while(1)
	{
	printf("1.Insert the node for list 1 at the front\n");
	printf("2.Insert the node for list 2 at the front\n");
	printf("3.concatinate the list\n");
	printf("4.sort the concatinated list\n");
        printf("5.reverse the list\n");
	printf("6.Display the full list\n");
	printf("7.Exit\n");
	scanf("%d",&ch);
 switch(ch)
 {
 case 1: printf("Enter the element to be inserted: ");
         scanf("%d",&value);
         head1=insert_front(head1,value);
         break;
 
 case 2: printf("Enter the element to be inserted: ");
         scanf("%d",&value);
         head2=insert_front(head2,value);
         break;
 case 3: head1=concatinate(head1,head2);
         break; 
 case 4: head1=sort(head1);
         break;
 case 5: head1=reverse(head1);
         break;
 case 6: display(head1);
         break;
 case 12: exit(0);
 default: printf("Invalid choice\n");
 }
 }
 return 0;
}
