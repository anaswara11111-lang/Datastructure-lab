#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 5
int counter=0;

struct stack
{
	int data;
	struct stack *link;
};
struct stack *top = NULL;
 
void push(int item)
{
	struct stack *newnode;
	newnode = (struct stack *)malloc(sizeof(struct stack));
	newnode->data = item;
	newnode->link = NULL;
	
	if(top == NULL)
	{
		top = newnode;
		printf("%d pushed successfully\n",item);
	}
	else
	{
		if(counter < MAX_SIZE)
		{
			newnode->link = top;
			top = newnode;
			counter = counter + 1;
			printf("%d pushed successfully\n",item);
		}
		else
			printf("Stack is full");
	}
}

void pop()
{
	struct stack *ptr;
	if(top == NULL)
	{
		printf("Empty List.Deletion not possible");
	}
	else
	{
		ptr = top;
		top = top->link;
		printf("Deleted element is %d\n");
		free(ptr);
	}
}
void display()
{
	struct stack *ptr;
	ptr=top;
	while(ptr!= NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->link;
	}
	printf("\n");
}

int main()
{
	int choice,item;
	do
	{
		printf("\n===STACK MENU===\n | 1.push |  2.pop | 3.display | 4.exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter element to push:");
				scanf("%d",&item);
				push(item);
			        break;
			case 2: pop();
			        break;
			case 3: printf("stack elements are:");
				display(); 
			        break;
			case 4: printf("Exiting...");
				break;
			default: printf("Your choice is invalid");
        	}
        }while(choice!=4);
return(0);
} 
	
