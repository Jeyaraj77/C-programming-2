#include<stdio.h>
int main()
{
    char a[50];
    printf("enter a string:");
    scanf("%[^\n]s",a);
    int n=strlen(a);
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

            // printf("%c",a[i]);
        }
    }
    printf("%s",a);
    return 0;
}
