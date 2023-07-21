
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,i;
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
    return 0;
}
