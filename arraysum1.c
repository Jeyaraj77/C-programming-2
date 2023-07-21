#include<stdio.h>
int main()
{
    int n,i,sum=0,m,j,k,l=1;
    printf("enter arr size:");
    scanf("%d",&n);
    int a[n];
    printf("enter array val:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter summing ele:");
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
        if(sum<m)
        {
            sum=sum+a[i];
        }
        else if(sum>m)
        {
            sum=sum-a[l];
            l++;
        }
        if(sum==m)
        {
            j=l;
            k=i;
            break;
        }


    }
    printf("%d\n",j);
    printf("%d",k);
}
