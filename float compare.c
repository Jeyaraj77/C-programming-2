#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    printf("enter a version 1:");
    scanf("%f",&a);
    printf("enter a version 2:");
    scanf("%f",&b);
    if(a>b)
        printf("varsion1 > version 2");
    if(a==b)
        printf("version2 = version 1");
    else
        printf("version2 < version 1");
    return 0;
}
