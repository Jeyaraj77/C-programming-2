
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
    int option,pos;
    while(1)
    {
        printf("\n   SINGLY LINKED LIST    \n");
        printf("1.create\n");
       // printf("2.display\n");
        printf("3.print the alternative nodes in the linked list\n");

        printf("Enter your choice ( 1 2 3 ): ");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            create();
            break;
        /*case 2:
            display();
            break;*/
        case 3:
            print_alternative();
            break;
        default:
            printf("exit");
        }
    }
}
void create()
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
}
void print_alternative()
{
    temp=head;
    int temp1=0;
    while(temp!=NULL)
    {
        if(temp1%2==0)
        {
            printf("%d",temp->data);
        }
        temp1++;
        temp=temp->next;
    }
}




