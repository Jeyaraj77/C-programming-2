#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int temp;
    printf("enter the encoding String: ");
    gets(s);
    int n=strlen(s);
    for(int i=0;i<n;i=i+temp)
    {
        temp=1;
        for(int j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            {
                temp++;
            }
            //printf("%c%d ",s[i],temp);
        }
        printf("%c%d ",s[i],temp);
    }
    return 0;
}
