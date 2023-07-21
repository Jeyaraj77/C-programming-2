#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],temp;
    scanf("%s",&str);
    int n=strlen(str);
    int i;
    for(i=0;i<=n;i++)
    {
        if(str[i]>str[i+1])
        {
            temp=str[i];
            str[i]=str[i+1];
            str[i+1]=temp;
        }
         printf("%c",str[i]);
    }

    return 0;
}
