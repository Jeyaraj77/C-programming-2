#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
struct node*head,*end,*newnode;
void create(int num)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->link=NULL;
    if(head==NULL)
    {
        head=newnode;
        end=newnode;
    }
    else
    {
        end->link=newnode;
        end=newnode;
    }
}
void display()
{
    struct node*ptr=head;
    printf("\n");
    while(ptr!=NULL)
    {
        printf("%d - %d\n",ptr->data,ptr->link);
        ptr=ptr->link;
    }
}
int main()
{
    int num,a;
    printf("enter lls size:");
    scanf("%d",&a);
    printf("enter element of lls:\n");
    for(int i=1;i<=a;i++)
    {
        scanf("%d",&num);
        create(num);
    }
    display();
    return 0;
}
