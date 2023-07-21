#include<stdio.h>
int odd(int m)
{
   return m;
}
int even(int n)
{
    return n;
}
int fact(int n,int m,int i)
{
    if(i%2!=0)
        return odd(m);
    if(i%2==0)
        return even(n);

}
int main()
{
    int n,m,k,i;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        n=i-1;
        m=i+1;
        printf("%d  ",fact(n,m,i));
    }
    return 0;
}
