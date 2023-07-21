#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],s;
    int i,n,k;
    scanf("%[^\n]s",a);
    n=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            s=toupper(a[i+1]);
            k=i+2;
        }
        if(a[i]==a[0])
        {
            s=a[i];
            printf("%c",toupper(s));
        }
        else if(a[i]!='\0')
        {
            if(a[i]==' ')
            {
                a[i]=' ';
                printf("%c",a[i]);
            }
            else
                printf("%c",a[i]);
        }
        else
        {
            printf("%c",a[k]);
        }
    }
    return 0;

}
