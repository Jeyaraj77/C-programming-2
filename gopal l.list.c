#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
}*head=NULL,*temp,*newnode,*prev;

void creation()
{
    int n,i;
    printf("Enter the node:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head = newnode;
            temp=newnode;
        }
        else
        {
            temp->next = newnode;
            temp = temp->next;
        }
    }
}
void display()
{
    temp=head;
    printf("listed elements:");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void insertfront()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter a inserting ele:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;

}

void insertmiddle()
{
    int pos,i;
    printf("Enter the position :");
    scanf("%d",&pos);
    int count = 0;
    temp = head;
    while(temp!=NULL)
    {
        count++;      //count pannitu temp a next node ku move panni vidrom.
        temp=temp->next;
    }
    if(pos>count)
    {
        printf("size exceeded ");
    }
    else
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter the data :");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp = head;
        for(i=1; i<pos; i++)
        {
            //temp = temp->next;
            prev = temp;                                             //newnode->next=temp->next;
            temp=temp->next ;                                        //temp->next=newnode;
        }
        newnode->next = temp;
        prev->next=newnode;
    }
}

void deletemiddle()
{
    int pos,i;
    printf("Enter the position :");
    scanf("%d",&pos);
    for(i=1; i<pos; i++)
    {
        prev = temp;
        temp=temp->next ;
    }
    prev->next = temp->next;
    free(temp);
}

void insertend()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp= temp->next;
    }
}

void deletefront()
{
    temp=head;
    head=head->next;
    free(temp);
}

void deleteend()
{
    temp=head;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==head)
    {
        head=NULL;
    }
    else
    {
        prev->next=NULL;
    }
    free(temp);
}

int main()
{
    while(1)
    {
        int choice;
        printf("\n\n1.Creation \n2.Display\n3.Insertfront\n4.Insertend\n5.deletefront\n6.deletend\n7.insertmiddle");
        printf("\nEnter your choice:");

        scanf("%d",&choice);
        switch(choice)
        {

        case 1:
            creation();
            break;

        case 2:
            display();
            break;

        case 3:
            insertfront();
            break;

        case 4:
            insertend();
            break;

        case 5:
            deletefront();
            break;

        case 6:
            deleteend();
            break;

        case 7:
            insertmiddle();
            break;

        case 8:
            deletemiddle();
            break;

        case 9:
            insertmiddle();

        default:
            printf("Invalid option");
      }
    }
    return 0;
}
