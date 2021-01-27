#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};

struct node *head=NULL;
struct node *newnode;

struct node *createnode(int data)
{
	struct  node *temp=(struct node*)(malloc(sizeof (struct node*)));
	temp->data=data;
	temp->link=NULL;
	return temp;
}

void insertnode( int data)
{
	if(head==NULL)
	{
		head= createnode(data);
	}
	else
	{
		struct node *temp=head;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		newnode=createnode(data);
		temp->link=newnode;
	}
}

struct node *search(int data)
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		if(temp->data==data)
		{
			return temp;
		}
		temp=temp->link;
	}
	return NULL;
}

void printlinkedlist()
{
	struct node *temp=head;
	int i=1;
	while(temp!=NULL)
	{
		printf("\n Node %d : %d",i,temp->data);
		temp=temp->link;
		i++;
	}
}

int main()
{
	int n,i,data,x;
	printf("\n Enter the number of nodes:");
	scanf("%d",&n);
	i=0;
	while(i<n)
	{
		printf("\n Enter the %d node : ",i+1);
		scanf("%d",&data);
		insertnode(data);
		i++;
	}
	printlinkedlist();
	return 0;
}

