#include<stdio.h>
#include<stdlib.h>
struct car
{
    int a;
    int b;
    int c;
    int d;
    int e;
};
int main()
{
    struct car f[2];
    int i,k,j;
    for(i=1;i<=2;i++)
    {
        //int j,k;
        printf("enter dis/lit: ");
        scanf("%d",&f[i].a);
        printf("fuel-cost/lit: ");
        scanf("%d",&f[i].b);
        printf("showroom price: ");
        scanf("%d",&f[i].c);
        printf("avg monthly run: ");
        scanf("%d",&f[i].d);
        printf("maintaince cost/month: ");
        scanf("%d",&f[i].e);
        k=f[1].c+(60*(f[1].e+(f[1].b*(f[1].d/f[1].a))));
        j=f[2].c+(60*(f[2].e+(f[2].b*(f[2].d/f[2].a))));
    }
   // printf("%d",k);
   /*if(k<j)
    printf("\npetrol car is efficient");
   else
   {
       printf("\ndiesel car is efficient.");
   }*/
   k<j?printf("\npetrol car is efficent"):printf("\nDiesel car is effiecient");
    return 0;
}
