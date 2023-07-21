#include<stdio.h>
struct emp
{
    int empid;
    char name[20];
    int year;
    float salary;
    long int phno;
};
void main()
{
    struct emp s[2];
    int i;
    for(i=0;i<2;i++)
    {
        scanf("%d %s %d %f %ld",&s[i].empid,&s[i].name,&s[i].year,&s[i].salary,&s[i].phno);
    }
    for(i=0;i<2;i++)
    {
        printf("\n\nEmp.Id: %d\nName: %s\nYear: %d\nSalary: %f\nPhone.No: %d",s[i].empid,s[i].name,s[i].year,s[i].salary,s[i].phno);
    }
    return 0;
}
