#include<stdio.h>
int main()
{
    int num,i,half,ans=0;
    printf("enter no.of persons in the hall:");
    scanf("%d",&num);
    half=num/2;
    for(i=num;i>=half;i--)
    {
        ans=ans+i;
    }
    printf("%d",ans);
    return 0;
}
