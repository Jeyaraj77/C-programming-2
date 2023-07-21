#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a val:");
    scanf("%d",&a);
    printf("enter b val:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a:%d\n""b:%d\n",a,b);
    return 0;
}
