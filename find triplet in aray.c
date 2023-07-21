#include<stdio.h>
int main()
{
    int i,j,k,m,sum;
    printf("enter m value:");
    scanf("%d",&m);
    int a[m];
    for(i=0;i<=m;i++)
    {
        scanf("%d",a[i]);
    }
    printf("enetr sum value:");
    scanf("%d",&sum);
    for(i=0;i<=m;i++)
    {
        for(j=i+1;j<=m;j++)
        {
            for(k=j+1;j<=m;k++)
            {
                if(a[i]+a[j]+a[k]==sum)
                {
                    printf("%d %d %d",a[i],a[j],a[k]);
                }
            }
        }
    }
    return 0;
}
