#include <stdio.h>
#define max 5

int queue[max],rear=-1,front=-1;
int insert();
int delete();
int display();

int main()
{
   int ch;
do
 {
    printf("\nMENU");
    printf("\n 1.insert");
    printf("\n 2.delete");
    printf("\n 3.display");
    printf("\nenter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:insert();
        break;
        case 2:delete();
        break;
        case 3:display();
        break;
    }
 }while(ch!=4);
 return 0;
}
int insert()
{
    int item;
    if(rear==max-1)
    {
        printf("overflowflow");
    }
   else
   {
       printf("enter the element to insert");
       scanf("%d",&item);
   
   if(front==-1 && rear==-1)
   {
       front=0;
       rear=0;
   }
   else{
       rear=rear+1;
   }
   queue[rear]=item;
   }
   return 0;
}
int delete()
{
    int val;
    if (front==-1 || front>rear)
    {
        printf("underflow");
    }
    else
    {
        val=queue[front];
        front=front+1;
        printf("deleted element is %d",val);
    }
    return 0;
}
int display()
{
    int i;
    if(front==-1 && rear==-1)
    printf("queue is empty");
    else
    {
        printf("***QUEUE***\n");
    
    for(i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
    }
    return 0;
}
