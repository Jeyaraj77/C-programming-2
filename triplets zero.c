#include<stdio.h>
int main()
{
    int i,j,k,n,tot=1,flag=0;;
    printf("enter array size:");
    scanf("%d",&n);
    //int *ptr=&m;
    int a[n];//b[ptr];
    printf("Enter arr elemnts:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            for(k=j+1;k<=n;k++)
            {
                tot=a[i]+a[j]+a[k];
            if(tot==0)
                {
                   printf("The elements are: %d %d %d\n",a[i],a[j],a[k]);
                   flag=1;
                }
}


        }
    }
    if(flag==0)
    {
        printf("no element found");
    }




    return 0;
}
