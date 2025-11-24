#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};
struct node *header = NULL;

/*void createNode(int item)
{
	
}*/

void insertAtFront(int item)
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = item;
	newnode->link = NULL;
	
	if(header == NULL)
	{
		header = newnode;
	}
	else
	{
		newnode->link = header;
		header = newnode;
	}
}

void insertAtEnd(int item)
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = item;
	newnode->link = NULL;
	
	if(header == NULL)
	{
		header = newnode;
	}
	else
	{
		struct node *ptr;
		ptr = header;
		while(ptr->link != NULL)
		{
			ptr = ptr->link;
		}
		ptr->link = newnode;
	}
}

void insertAtAny(int key, int item)
{
	struct node *ptr, *ptr1;
	ptr = header;
	while(ptr != NULL && ptr->data != key)
	{
		ptr1 = ptr;
		ptr = ptr->link;
	}
	if(ptr == NULL)
	{
		printf("Key not found, insertion not possible.\n");
	}
	else
	{
		struct node *newnode;
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->data = item;
		newnode->link = ptr;
		ptr1->link = newnode;
		printf("Inserted %d after %d successfully.\n", item, key);
	}
}

void traversaList()
{
	struct node *ptr;
	ptr = header;
	if(ptr == NULL)
	{
		printf("List is empty.\n");
		return;
	}
	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
	printf("\n");
}

int main()
{
	int choice, item, key;

	while(1)
	{
		printf("\n===== LINKED LIST MENU =====\n");
		printf("1. Insert at Front\n");
		printf("2. Insert at End\n");
		printf("3. Insert After a Given Node\n");
		printf("4. Display List\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("Enter element to insert at front: ");
				scanf("%d", &item);
				insertAtFront(item);
				break;

			case 2:
				printf("Enter element to insert at end: ");
				scanf("%d", &item);
				insertAtEnd(item);
				break;

			case 3:
				printf("Enter key (node data) after which to insert: ");
				scanf("%d", &key);
				printf("Enter new element to insert: ");
				scanf("%d", &item);
				insertAtAny(key, item);
				break;

			case 4:
				printf("Current Linked List: ");
				traversaList();
				break;

			case 5:
				printf("Exiting program...\n");
				exit(0);
				break;

			default:
				printf("Invalid choice! Please try again.\n");
		}
	}

	return 0;
}

