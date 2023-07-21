#include<stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("The number: +%d",a);
    }
    else
    {
        printf("The number: %d",a);
    }
    return 0;
}
