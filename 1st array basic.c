#include<stdio.h>
int main()
{
   int a[20],i,N;
   printf("enter N value:");
   scanf("%d",&N);
   for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=N-1;i>=0;i--)
   {
       printf("%d\t",a[i]);
   }
   return 0;
}

