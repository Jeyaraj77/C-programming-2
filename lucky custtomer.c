#include<stdio.h>
int main()
{
    int n,a=1,b=1,i,tot;
    printf("enter cust id:");
    scanf("%d",&n);
    for(i=0;i<n-2;i++)
    {
        tot=a+b;
        //printf("%d ",i);
        a=b;
        b=tot;

    }
    printf("%d",b);
}
