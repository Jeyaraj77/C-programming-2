#include<stdio.h>
int main()
{
     int m,n,row,col,sum=0,sum1=0;
    printf("enter m value:");
    scanf("%d",&m);
    printf("enter n value:");
    scanf("%d",&n);
    int a[m][n];
    printf("enter array ele:");
    for(row=1;row<=m;row++)
    {
        for(col=1;col<=n;col++)
        {
           scanf("%d",&a[row][col]);
        }
    }
    printf("row total: ");
    for(row=1;row<=m;row++)
    {
        for(col=1;col<=n;col++)
        {
            sum=sum+a[row][col];
        }
        printf("%d  ",sum);
        sum=0;
       // printf("\n");
    }
    printf("\ncol total: ");
    for(row=1;row<=m;row++)
    {
        for(col=1;col<=n;col++)
        {
            sum1=sum1+a[col][row];
        }
        printf("%d  ",sum1);
        sum1=0;
        //printf("\n");
    }
    return 0;
}
