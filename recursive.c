#include<stdio.h>
/*int odd(int j)
{
    printf("%d ",j);
    return fact(j);
}*/
int fact(int n,int m)
{
    int k,j;
    if(n>0)
    {
        if(n%2==0)
        {
            k=m+1;
            printf("%d ",k);
            m++;
        }
        if(n%2!=0)
        {
            j=m-1;
            printf("%d ",j);
            m++;
        }
        /*if(n%2!=0)
        {
            printf("%d ",j);

        }*/
        n--;
        return fact(n,m);
    }
    if(n==0)
        return m;
}
int main()
{
    int n,m=1;
    scanf("%d",&n);
    fact(n,m);
}
