#include<stdio.h>
int sum(int m)
{
    int rem,rev=0;
   while(m!=0)
   {
       rem=m%10;
       rev=rev*10+rem;
       m=m/10;
   }
    return rev;
}
int main()
{
    int m;
    scanf("%d",&m);
    printf("%d",sum(m));
}
