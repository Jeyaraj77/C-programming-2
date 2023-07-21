#include<stdio.h>
int main()
{
    int i,num,se,flag=0;
    printf("enter number of ele in arrary:");
    scanf("%d",&num);
    int a[num];
    printf("enter array elements:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter a search element:");
    scanf("%d",&se);
    for(i=0;i<num;i++)
    {
        if(se==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("search is found");
    }
    else
    {
        printf("search is not found");
    }
    return 0;
}
