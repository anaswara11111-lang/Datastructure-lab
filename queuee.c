#include<stdio.h>
#define max_size 10
int queue[max_size],front=-1,rear=-1;
void enqueue(int item)
{
	if(rear>=max_size-1)
	{
		printf("Queue  is full\n");
	}
	if(front==-1)
	        front=0;
		printf("Enter the element to push:");
		scanf("%d",&item);
		rear=rear+1;
		queue[rear]=item;
}
void dequeue()
{
	if(front==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("Deleted element is %d",queue[front]);
		front=front-1;
	}
}
void display()
{
	for(int i=front;i<=rear;i++)
	{
		printf("%d ",queue[i]);
		
	}
}
int main()
{
	int choice,item;
	do
	{
		printf("\n1.push \n2.pop \n3.display \n4.exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: enqueue(item);
			        break;
			case 2: dequeue();
			        break;
			case 3: display(); 
			        break;
			case 4: break;
			default: printf("Your choice is invalid");
				 break;
        	}
        }while(choice!=4);
return(0);
} 
