#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("enter a size of an array: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(s<a[i])
        {
           if(a[i]%2!=0)
                s=a[i];
        }

    }
    if(s%2!=0)
    {
        printf("the largest nuber is: %d ",s);
    }
    else
        printf("that large number is not odd");
    return 0;
}
