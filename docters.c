#include<stdio.h>
int main()
{
    int n;
    printf("Enter total no of patientes:");
    scanf("%d",&n);
    if(n<=20)
    {
        int a[n],tot=0,i;
        printf("Enter the patience age:");
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]>0 && a[i]<17)
            {
                tot=tot+200;
            }
            if(a[i]>=17 && a[i]<40)
            {
                tot=tot+400;
            }
            if(a[i]>=40 && a[i]<=120)
            {
                tot=tot+300;
            }
        }
        printf("Total amount: %d",tot);
    }
    else
    {
        printf("docter was busy");
    }
    return 0;
}
