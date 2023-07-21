#include<stdio.h>
int main()
{
    int i,j,temp,m=9;
    int a[]={1,2,4,3,6,5,8,7,9};
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-i-1;j++)
        {
            if(a[j]< a[j+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
