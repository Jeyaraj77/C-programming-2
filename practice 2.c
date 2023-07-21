/*#include<stdio.h>
int main()
{
    int n;
    printf("enter arrar size:");
    scanf("%d",&n);
    int i,j,a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&a[i][j]);
        }
       // printf("\n");
    }
}*/
#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
            k=a[i+1];
    }
    printf("greatest number is:%d",k);
    return 0;
}

