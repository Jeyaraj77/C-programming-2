#include<stdio.h>
int main()
{
    int a[8]={10,20,12,15,34,45,32,36};
    int i,val;
    for(i=0;i<8;i++)
    {
       if(a[i]>a[i+1])
       {
           val=a[i+1];
       }
    }
    printf("largest element:%d",val);
}
