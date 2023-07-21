#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int val=0,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)
            {
                val=0;
                printf(val);
            }
            else if(i==i+1||i==n-1||j==j+1||j==n-j)
            {
                val=1;
                printf(val);
            }
            else if(i==(n/2)-1||i==n-2||j==(n/2)-1||j==n-2)
            {
                val=2;
                printf(val);
            }
            else if(i==(n/2)||i==n-3||j==(n/2)||j==n-3)
            {
                val=3;
                printf(val);
            }
        }

    }
    return 0;
}
