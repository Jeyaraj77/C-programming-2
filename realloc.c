#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,i,*ptr1;
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        ptr[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    scanf("%d",&n);
    ptr1=realloc(ptr,sizeof(int));
    for(i=2;i<=1;i++)
    {
        ptr1[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ptr1[i]);
    }
    return 0;
}
