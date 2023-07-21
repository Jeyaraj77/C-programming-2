#include<stdio.h>
int main()
{
    char a[100];
    printf("enter a stirng: ");
    scanf("%[^\n]s",a);
    int i,count=0;
    for(i=0;a[i]<='\0';i++)
    {
        if(!((a[i]>='65' && a[i]<='90')||(a[i]>='97' && a[i]<='122')||(a[i]>='48' && a[i]<='57')))
        count++;
    }
    printf("number of spl char in array: '%d' ",count);
    return 0;
}
