#include<stdio.h>
#define max 5
int queue[max],rear=-1,front=-1;
void insert();
void delet();
void display();
int main()
{
	int ch;
	do
	{
		printf("*mainmenu*\n");
		printf("1.insert\n");
		printf("2.delete\n");
		printf("3.display\n");
		printf("4.exit");
		printf("enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
			case 2:delet();
			       break;
			case 3:display();
			       break;
		}
	}while(ch!=4);
	return 0;
}
void insert()
{
	int num;
	if(front==0 && rear==max-1)
	{
		printf("OVERFOLW");
	}
	else
	{
		printf("enter the element inserted");
		scanf("%d",&num);
		if(front==-1&&rear==-1)
		{
			front=0;
			rear=0;
		}
		else if(front!=0&&rear==max-1)
		{
			rear=0;
		}
		else
		{
			rear=rear+1;
		}
		queue[rear]=num;
	}
}
void delet()
{                              1
	int value;
	if(front==-1)
	{
		printf("UNDERFLOW");
	}
	else
	{
		value=queue[front];
		if(front==rear)
		{
			front=rear-1;
		}
		else if(front==max-1)
		{
			front=0;
		}
		else
		front=front+1;
		printf("deleted element is %d",value);
	}
}
void display()
{
	int i;
	if(front==-1&&rear==-1)
	printf("EMPTY QUEUE");
	else
	{
		printf("queue\n");
		if(front<rear)
		{
			for(i=front;i<=rear;i++)
			{
				printf("%d\t",queue[i]);
			}
		}
		else
		{
			for(i=front;i<=max-1;i++)
			{
				printf("%d\t",queue[i]);
			}
			for(i=0;i<=rear;i++)
			{
				printf("%d\t",queue[i]);
			}
		}
	}
