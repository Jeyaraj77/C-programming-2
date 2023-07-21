#include<Stdio.h>
int main()
{
    int count=0,i=0,length=0;
    char str[100];
    printf("enter simple sentence: ");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            count=0;
        }
        else
        {
            count++;
        }
        length++;
        i++;
    }
    printf("last word is '");
    for(i=length-count;i<length;i++)
    {
        printf("%c",str[i]);
    }
    printf("' with length of %d",count);
    return 0;
}
