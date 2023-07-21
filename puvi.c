#include<stdio.h>
int main()
/*{
int a,b,c;
printf("enter a value");
scanf("%d",&a);
printf("enter b value");
scanf("%d",&b);
c=a+b;
//printf("%d",c);
if(c%2==0)
{
    printf("even");
}
else if(c%2!=0)
{
    printf("odd");
}
return 0;
}*/
{
    int c,b,count=0;
    scanf("%d %d",&c,&b);
    while(c<b)
    {
        count++;
        c++;
    }
    printf("%d",count);
}



