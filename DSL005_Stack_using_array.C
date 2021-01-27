#include<stdio.h>
#define MAX 10

int stack[MAX], top=-1;
void push(int stack[], int val);
int pop(int stack[]);
int peep(int stack[]);
void display(int stack[]);

int main()
{
	int choice, val;
	clrscr();
	while(1)
	{
		printf("\nMain Menu");
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Display");
		printf("\n4.Peep");
		printf("\n5.Exit");
		printf("\n Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push(stack,val);
				break;
			case 2: pop(stack);
				break;
			case 3: display(stack);
				break;
			case 4: peep(stack);
				break;
			case 5: exit(1);
		}
	}
}
void push(int stack[],int val)
{
	if(top==(MAX-1))
	{
		printf("\n Stack Overflow");
	}
	else
	{
		printf("\n Enter the Elements to be pushed on to the stack:");
		scanf("%d",&val);
		top++;
		stack[top]=val;
	}
}
int pop()
{
	int val;
	if (top==-1)
	{
		printf("\n Stack Underflow");
		return -1;
	}
	else
	{
		printf("\n Element popped from stack: %d", stack[top]);
		top--;
		return val;
	}
}
void display()
{
	int i;
	if(top==-1)
		printf("No Element in stack");
	else
	{
		printf("\n Element in stack: \n");
		for(i=top;i>=0;i--)
		{
			printf("\n%d", stack[i]);
		}
	}
}
int peep( int stack[])
{
	if(top==-1)
	{
		printf("\n stack is empty");
		return -1;
	}
	else
	{
		printf("\n The value stored on the top of the stack is:%d",stack[top]);
		return (stack[top]);
	}
}