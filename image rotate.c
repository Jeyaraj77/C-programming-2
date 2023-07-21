#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the arr size:");
    scanf("%d",&n);
    int a[n][n];
    printf("enter %d arr elements: ",n*n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            int temp=a[j][i];
            a[j][i]=a[i][i];
            a[i][i]=temp;
        }
        //printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
            printf("\n");
    }
    return 0;
}
