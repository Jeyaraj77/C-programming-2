#include<stdio.h>
struct stud
{
    char name[20];
    char DOB[14];
    int RegNo;
    float maths;
    float tamil;
    float science;
    char place[20];
   // struct stud s[5];
};
void main()
{
    struct stud s[2];
    int i;
    for(i=0;i<2;i++)
    {
        scanf("%s %s %d %f %f %f %s",&s[i].name,&s[i].DOB,&s[i].RegNo,&s[i].maths,&s[i].tamil,&s[i].science,&s[i].place);
    }
    for(i=0;i<2;i++)
    {
        printf("Name: %s\nD.O.B: %s\nReg.No: %d\nMaths: %f\nTamil: %f\nScience: %f\nplace:%s\n\n",s[i].name,s[i].DOB,s[i].RegNo,s[i].maths,s[i].tamil,s[i].science,s[i].place);
    }
}
