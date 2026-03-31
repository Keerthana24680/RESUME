#include<stdio.h>

const int QUEUE_SIZE=100;

int queue[100];
int front=-1,rear=-1;

void enqueue(int value)
{
	if(rear>=QUEUE_SIZE-1)
	{
		printf("Queue Overflow\n");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		rear++;
		queue[rear]=value;
		printf("Enqueued %d\n",value);
	}
}
void dequeue()
{
	if(front==-1||front>rear)
	{
		printf("Queue Underflow\n");
		front=rear=-1;
	}
	else
	{
		int dequeued=queue[front];
		front++;
		printf("Dequeued %d\n",dequeued);
		if(front>rear)
		{
			front=rear=-1;
		}
	}
}
 void display()
{
	if(front==-1||front>rear)
	{
		printf("Queue is Empty\n");
	}
	else
	{
		printf("Queue elements(front to rear)\n");
		for (int i=front;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
		}
	}
}

int main()
{
	int choice,value;
	while(1)
	{
		printf(" 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				printf("Enter value to enqueue:\n");
				scanf("%d",&value);
				enqueue(value);
				break;
			}
			case 2:
			{
				dequeue();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				printf("Exiting from the program");
				return 0;
			}
			default :
				printf("Invalid Choice.Please try again\n");
				break ;
		}
	}
	return 0;
}
