#include <stdio.h>
#include <string.h>
int revstr(char *str)
 {
    if(str=='\0')
    {
        return;
    }
    else
    {
        revstr(str+1);
        printf("%c",str);
    }
}

int main()
 {
    char str[100];
    //char *s=&str;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Reversed string: ");
    revstr(str);
    printf("%s",str);
    return 0;
}

