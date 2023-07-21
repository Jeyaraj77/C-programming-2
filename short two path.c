#include<stdio.h>
int main()
{
    int n;
    printf("enter total path:");
    scanf("%d",&n);
    int a[n],i;
    for(i=0; i<n; i++)
    {
        printf("Enter distance: ");
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int temp;
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n\n");
    for(i=0; i<2; i++)
    {
        // printf("\n%d shortest distace: %d",i+1,a[i]);
        printf("%d distance is: %d \n",i+1,a[i]);
    }
    return 0;
}
