#include<stdio.h>
int  fun(int a)
{
if(a<=50)
{
    printf("%d\n",a);
    a++;
}
else
{
    return fun(n);
}
return 0;
}
int main()
{
   int base,pow;
   scanf("%d",&base);
   fun(base);
}
