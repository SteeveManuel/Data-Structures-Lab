#include<stdio.h>
#include<conio.h>
#define max 5
int queue[max];
int front=-1,rear=-1;
int main()
{
	int choice;
	clrscr();
	while(1)
	{
		printf("\n1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Quit\n");
		printf("Enter Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: insert();
				break;
			case 2: delete_element();
				break;
			case 3: display();
				break;
			case 4: exit();
				break;
			default: printf("wrong choice");
		}
	}
}
insert()
{
	int additem;
	if (rear==max-1)
	{
		printf("\n Queue Overflow\n");
	}
	else
	{
		if(front==-1)
			front=0;
		printf("Input the element to be added in queue: ");
		scanf("%d",&additem);
		rear=rear+1;
		queue[rear]=additem;
	}
	return;
}
int delete_element()
{
	if(front==-1||front>rear)
	{
		printf("Queue Underflow");
		return;
	}
	else
	{
		printf("\nElement deleted from queue is %d\n",queue[front]);
		front++;
		return;
	}
}
int display()
{
	int i;
	printf("queue is ");
	for(i=front;i<=rear;i++)
	printf("\t %d",queue[i]);
	printf("\n");
	return;
}

