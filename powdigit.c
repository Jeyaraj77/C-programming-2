#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,k,mul,i,rem,rev=0,rem1,rev1=0;
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    printf("enter k value:");
    scanf("%d",&k);
    mul=pow(a,b);
    for(i=0;i<k;i++)
    {
        rem=mul%10;
        rev=rev*10+rem;
        mul=mul/10;
    }
    while(rev!=0)
    {
        rem1=rev%10;
        rev1=rev1*10+rem1;
        rev=rev/10;
    }
    printf("%d",rev1);
}
