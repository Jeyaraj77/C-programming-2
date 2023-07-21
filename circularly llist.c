#include<stdio.h>
#include<stdlib.h>
#define size 5;
int q[size];
int front=-1,rear=-1;
void enq()
{
    scanf("%d",&data);
    if(front==-1 && rear==-1)
    {
        front=rear=0;
        arr[rear]=data;
    }
    else if(rear+1)%n-1
    {
        printf("queue is full");

    }
    else
    {
        rear++;
        a[rear]=data;
    }
}
