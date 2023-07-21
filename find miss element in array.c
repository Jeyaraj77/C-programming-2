#include<Stdio.h>
int main()
{
    int a[25],i,m,n=0,sub;
    printf("enter m value:");//no of eelements in array.
    scanf("%d",&m);
    int o=m;
    for(i=1;i<=m-1;i++)
    {
        scanf("%d",&a[i]);
        n=n+a[i];
        o=o+i;
    }
    /*for(i=1;i<m;i++){
        o=o+i;
    }*/
    printf("%d  %d\n",n,o);
    sub=o-n;
    printf("\n%d",sub);
    return 0;
}
