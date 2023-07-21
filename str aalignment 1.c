#include<stdio.h>
int main()
{
    int i,j,n;
    char m[15];
    printf("enter a string:");
    gets(m);
    n = strlen(m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",m[j]);
        }
        printf("\n");
    }
    return 0;

}
