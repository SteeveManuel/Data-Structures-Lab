#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *next;
}*top=NULL,*temp;
main()
{
	int choice;
	clrscr();
	while(1)
	{
		printf("\n Main Menu \n");
		printf("1. Push \n");
		printf("2. Pop \n");
		printf("3. Display \n");
		printf("4. Quit \n");
		scanf("%d", &choice);
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
			default: printf("/n wrong choice \n");
		}
	}

}
push()
{
	struct stack* temp;
	int pushitem;
	temp=(struct stack*)malloc(sizeof(struct stack));
	printf("Input the element to be inserted on to the stack ; ");
	scanf("%d",&pushitem);
	temp->data=pushitem;
	temp->next=top;
	top=temp;
	return;
}
pop()
{
	struct stack *ptr;
	if(top==NULL)
		printf("Stack is empty");
	else
	{	temp=top;
		printf("popped item is %d\n:",temp->data);
		top=top->next;
		free(temp);
	}
	return;
}

display()
{
	struct stack *ptr;
	ptr=top;
	if(top==NULL)
		printf("stack is empty\n");
	else
	{
		printf("Stack elements :\n");
		while(ptr!=NULL)
		{
			printf("%d\n",ptr->data);
			ptr=ptr->next;
		}
	}
	return;
}
