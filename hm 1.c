#include<stdio.h>
int main()
{
    int i,j,m,n,o=0;
    printf("enter m value:");
    scanf("%d",&m);
    printf("enter n value:");
    scanf("%d",&n);
    o=m+n;
    int a[m],b[n];
    for(i=1;i<=m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<=n;j++)
    {
        scanf("%d",&b[j]);
    }
    int c[o]=a[m]+b[n];
    for(i=0;i<=o;i++)
    {
        //for(j=1+1;j<=o;j++)
       // {
          printf("%d",c[i]);
       // }
    }

    return 0;
}
