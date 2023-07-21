#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {
        for(int j=i+1;j<=i/2;j++)
        {
            if(i%j!=0)
            {
                printf("%d",i);
            }
        }

    }
    return 0;
}
