#include<stdio.h>
int sum(int *p1,int *p2)
{
    //int n,b;
    *p1=*p1*2;
    *p2=*p2*2;
   // return m;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int *p1=&a;
    int *p2=&b;
    sum(p1,p2);
    printf("%d\n%d",a,b);
    return 0;
}
