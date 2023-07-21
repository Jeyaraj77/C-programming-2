#include<stdio.h>
#include<stdlib.h>
void create();
//void display();
void print_alternative();
struct node
{
    int data;
    struct node *next;
}*newnode,*head,*temp;
int main()

{
    int n,i,c=0;
    printf("enter the size ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    temp=head;
    int temp1=0;
    while(temp!=NULL)
    {
        if(temp1%2==0)
        {
            printf("%d ",temp->data);
        }
        temp1++;
        temp=temp->next;
    }
}
