#include<stdio.h>
int main()
{
    int n,i,j;
    char m[15];
    printf("enter a string:");
    gets(m);
    n=strlen(m);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=n-1;j++)
        {
            printf("* ");
        }
        for(j=0;j<=n;j++)
        {
            printf("%c",m[j]);
        }
        for(j=i;j<n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
