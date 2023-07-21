#include<stdio.h>
int main()
{
    int n,row,col;
    printf("enter n value:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=row;col<=n;col++)
        {
            printf(" ");
        }
        for(col=1;col<=(row*2)-1;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(row=n;row>=1;row++)
    {
        for(col=row;col<=n;col++)
        {
            printf(" ");
        }
        for(col=(row*2)-1;col>=row;col--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
