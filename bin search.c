#include<Stdio.h>
int main()
{
    int low,mid,high,num,i,se,flag;
    printf("enter num value:");
    scanf("%d",&num);
    int a[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter find ele:");
    scanf("%d",&se);
    low=0;
    high=num-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==se)
            flag=1;
        if(se>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(flag==1)
        printf("ele founded");
    else
        printf("not founded");
    return 0;
}
