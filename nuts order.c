#include<stdio.h>
#include<string.h>
int main()
{
    char c[9]="!#$%&*@^~";
    int n,k=0;
    printf("Enter char array size: ");
    scanf("%d",&n);
    char a[n],b[n],temp;
    printf("enter nuts size: ");
    scanf("%s",&a);
    printf("enter bolts elements: ");
    scanf("%s",&b);
    //gets(b);
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(c[i]==a[j])
            {
                temp= a[j];
                a[j]=a[k];
                a[k]=temp;
                k++;
            }
        }
    }
    k=0;
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(c[i]==b[j])
            {
                temp= b[j];
                b[j]=b[k];
                b[k]=temp;
                k++;
            }
        }
    }
    printf("nuts: %s\n",a);
    printf("bolts: %s",b);
    return 0;
}

