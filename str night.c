#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],s;
    gets(a);
    scanf("%c",&s);
    int i,c,count;
    for(a[i]=0;a[i]<='\0';a[i++])
    {
        if(a[i]==s)
        {
            c=i;
            count=1;
        }
        else
        {
            count=0;
        }
    }
    if(count==1)
        printf("character is found at  index %d",c);
    else
        printf("Charcter is not found");
    return 0;

}
