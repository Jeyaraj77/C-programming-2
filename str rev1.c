#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    printf("enter a str:");
    gets(a);
    int n=strlen(a);
    int i,m=0;
    for(i=n-1;i>=0;i--)
    {
        b[m]=a[i];
        m++;
    }
    printf("reversed string is: ");
    for(m=0;m<n;m++)
    {
        printf("%c",b[m]);
    }
    return 0;
}
