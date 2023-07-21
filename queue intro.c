#include<stdio.h>
#include<stdlib.h>
#define size 5
void insert();
void delet();
void print();
int a[size];
int front=-1,rear=-1;
//void ();
/*struct node
{
    int data;
    struct node *next;
}*newnode,*head,*temp;*/
int main()
{

    int option;
    while(1)
    {
        printf("\n   QUEUE INTRO    \n");
        printf("1.Insert\n");
        printf("2.Delet\n");
        printf("3.print the queue\n");

        printf("Enter your choice ( 1 2 3 ): ");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            insert();
            break;
        case 2:
            delet();
            break;
        case 3:
            print();
            break;
        default:
            printf("exit");
        }
    }
}
void insert()
{
    if(rear==-1&&front==-1)
    {
        printf("queue is empty");
        rear=0;
        front=0;
        scanf("%d",&a[rear]);

    }
    if(rear==size-1)
    {
        printf("queue is full");
    }
    else
    {
        rear++;
        scanf("%d",&a[rear]);
        //rear++;
    }
}
void delet()
{
    free(a[front]);
    front++;
}
void print()
{
    int i;
    if(front==-1 && rear==-1)
        printf("queue is emepty");
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",a[i]);
        }
    }
}
