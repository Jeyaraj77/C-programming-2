#include<Stdio.h>
int main()
{
    int i,j,k;
    printf("enter k value:");
    scanf("%d",&k);
    int a[k][k];
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=k;j++)
        {
            if(i==1 || i==k ||  j==1 || j==k)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
