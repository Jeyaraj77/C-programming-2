#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head = NULL,*temp,*newnode;
int main()
{
    int n,i;
    printf("enther N  value:");
    scanf("%d",&n);
    printf("enter a ele in l.list:");
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
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
            temp=temp->next;
        }
    }
    temp=head;
    printf("listed elements:");

    while(temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
   /* newnode=(struct node*)malloc(sizeof(struct node));// insert ele on front
    printf("enter new element:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    temp=head;*/
   /* newnode = (struct node*)malloc(sizeof(struct node)); //insert at end.
    printf("\nenter ele at end :");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    printf("The final elemements:");*/
    while(temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    return 0;
}
