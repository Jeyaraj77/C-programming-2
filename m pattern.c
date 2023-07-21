#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1 || j==n)
                printf("* ");
            else if(j==i && i<=(n/2)+1)
                printf("* ");
            else if(i+j==n+1 && i<=(n/2)+1)
                printf("* ");
            else
                printf("  ");

        }
        printf("\n");
    }
    return 0;
}
