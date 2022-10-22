#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
node *head=NULL;
struct node *createnode()
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
}
void ins_first(node** head)
{
	node *ptr=createnode();
	ptr->next=*head;
	*head=ptr;
}
void ins_last(node** head)
{
	node *temp;
	temp=*head;
	node *newnode=createnode();
	newnode->next=NULL;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
}
void display(node** head)
{
	node *temp;
	if(*head==NULL)
	{
		printf("List is empty ");
	}
	else
	{
		temp=*head;
		while(temp!=NULL)
		{
		printf("%d\t",temp->data);
		temp=temp->next;
		}
	}
}
void deletefirstnode(node **head)
{
	node *temp;
	if(*head==NULL)
	printf("List is empty");
	else
	{
	temp=*head;
	temp=temp->next;
	free(temp);
	}
}
void deletelastnode(node **head)
{
	node *temp,*prevnode;
	temp=*head;
	while(temp->next!=0)
	{
		prevnode=temp;
		temp=temp->next;
	}
	if(temp==*head)
	{
		head=0;
	}
	else
	{
		prevnode->next=NULL;
	}
	free(temp);
}
int menu()
{
	int ch;
	printf("\n1. Press 1 to insert in first position ");
	printf("\n2. Press 2 to display the list ");
	printf("\n3. Press 3 to Insert in last ");
	printf("\n4. Press 4 to delete the first data ");
	printf("\n5. Press 5 to delete the last data ");
	printf("\n6. Exit");
	printf("\n\nEnter ur choise ");
	scanf("%d",&ch);
	return ch;
}
int main()
{
	while(1)
	{
		switch(menu())
		{
			case 1:
				ins_first(&head);
				break;
			case 2:
				display(&head);
				break;
			case 3:
				ins_last(&head);
				break;
			case 4:
				deletefirstnode(&head);
				break;
			case 5:
				deletelastnode(&head);
			case 6:
				exit(0);
				break;
		}
	}
}
