#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int tot=(n/5);
    int k=tot/5;
    printf("\n%d",tot+k);
    return 0;
}
