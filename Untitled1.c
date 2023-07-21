#include<stdio.h>
int main()
{
   int num1=5,num2=10;
   printf("return value of (%d==%d) is %d\n",num1,num2,num1==num2);
   printf("return value of (%d!=%d) is %d\n",num1,num2,num1!=num2);
   printf("return value of (%d<%d) is %d\n",num1,num2,num1<num2);
   printf("return value of (%d<=%d) is %d\n",num1,num2,num1<=num2);
   printf("return value of (%d>%d) is %d\n",num1,num2,num1>num2);
   printf("return value of (%d>=%d) is %d\n",num1,num2,num1>=num2);
   return 0;
}

