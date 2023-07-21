#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number:");
    scanf("%d",&num);
    int tot=num;
    for(i=0;i<num;i++)
    {
        tot++;
    }
    printf("The double of given number is: %d",tot);
    return 0;
}
