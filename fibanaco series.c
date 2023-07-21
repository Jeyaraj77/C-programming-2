#include<stdio.h>
int main()
{
    int n,a=0,b=1,i;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=1;i<n;i++)
    {

       i=a+b;
       if(i>n)
        break;
       printf("%d ",i);
       a=b;
       b=i;

    }
}
