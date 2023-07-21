#include<Stdio.h>
int main()
{
    int low,mid,high,num,i,m;
    printf("enter num value:");
    scanf("%d",&num);
    int a[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter find ele:");
    scanf("%d",&m);
    low=0;
    high=num-1;
    mid=(low+high)/2;
    for(i=0;i<num;i++)
    {
        if(m==a[i])
            printf("ele founded:%d",a[i]);
        else if(a[i]<a[mid])
        {
             for(i=0;i<mid;i++)
             {
                 if(m==a[i])
                    printf("ele founded:%d",a[i]);
             }
        }
        else if(a[i]>a[mid])
        {
            for(i=mid;i<=high;i++)
            {
                if(m==a[i])
                    printf("ele founded:%d",m);
            }
        }
    }
}
