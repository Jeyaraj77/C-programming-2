#include<stdio.h>
int main()
{
    int i,m,j,count,maxele=0;
    printf(" enter m value:");
    scanf("%d",&m);
    int a[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        count=1;
        for(j=i+1;j<m;j++)
        {
            if(a[j]==a[i])
            {
                count++;
                if(count>maxele)
                {
                    maxele=a[j];
                }
            }
        }
    }
    printf("%d",maxele);
    return 0;
}
