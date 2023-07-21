#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int count=0;
    printf("enter the encoding messsge: ");
    scanf("%s",&a);
    printf("%s\n",a);
    for(int i=0;a[i]<'\0';i++)
    {
        if((a[i]>=1 && a[i]<=9)||(a[i]>=91 && a[i]<=95))
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
