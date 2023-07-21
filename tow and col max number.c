#include<stdio.h>
int main()
{
    int n,i,j,s=0;
    scanf("%d",&n);
    int a[n][n];
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            printf("%d",a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            if(s<a[i][j])
                s=a[i][j];
           /* else if(a[i+1][j+1]<a[i][j])
                s=a[i][j];
            else
                s=a[i+1][j+1];*/
        }
        printf("row %d: %d \n",i,s);
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            if(s<a[j][i])
                s=a[j][i];
        }
        printf("col %d: %d\n",i,s);
    }
    return 0;
}
