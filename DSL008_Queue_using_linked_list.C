#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link;
}*front=NULL,*rear=NULL;

main()
{
	int choice;
	clrscr();
	while(1)
	{
		printf("\n Main Menu \n");
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Quit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: exit(1);
				break;
			default: printf("\twrong choice\n");
		}
	}
}

push()
{
	struct node* temp;
	int additem;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\tInput the element to be inserted on to the queue : ");
	scanf("%d", &additem);
	temp->info=additem;
	temp->link=NULL;
	if(front==NULL)
		front=temp;
	else
		rear->link=temp;
	rear=temp;
	return;
}

pop()
{
	struct node *temp;
	if(front==NULL)
		printf("\tQueue underflow\n");
	else
	{
		temp=front;
		printf("\tDeleted element is :  %d \n",temp->info);
		front=front->link;
		free(temp);
	}
	return;
}

display()
{
	struct node *ptr;
	ptr=front;
	if(front==NULL)
	printf("\tQueue is empty\n");
	else
	{
		printf("\tQueue Elements : ");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->info);
			ptr=ptr->link;
		}
		printf("\n");
	}
	return;
}







