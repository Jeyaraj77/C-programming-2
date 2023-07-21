#include<stdio.h>
int main()
{
    int m,n,i,j;
    printf("enter m value:");
    scanf("%d",&m);
    printf("enter n value:");
    scanf("%d",&n);
    int a[m][n];
    printf("enter array ele:");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=n;j>=1;j--)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
