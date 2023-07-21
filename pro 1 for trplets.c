#include<stdio.h>
int main()
{
    int i,j,k,n,t,max;
    printf("enter thershold value: ");
    scanf("%d",&t);
    printf("enter array size: ");
    scanf("%d",&n);
    int a[n],count=0;
    printf("enter arr elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-2; i++)
    {
        for(j=i+1; j<n-1; j++)
        {
            for(k=j+1; k<n; k++)
            {

                if(a[i]<a[j] && a[j]<a[k])

                {
                    max=0;
                    max=a[i]+a[j]+a[k];
                    if(max<=t)
                        count++;
                }
            }
        }
    }
    printf("possiblity: %d",count);
    return 0;
}
