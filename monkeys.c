#include<stdio.h>
int main()
{
    int n,k,j,m,p;
    printf("Total monkeys on the tree:");
    scanf("%d",&n);
    //int l=n;
    printf("NO of banana eatable by a monkey:");
    scanf("%d",&k);
    printf("no of peanuts eatable by a monkey:");
    scanf("%d",&j);
    printf("No of Banana:");
    scanf("%d",&m);
    printf("No of peanuts:");
    scanf("%d",&p);
    n=n-(m/k);
    n=n-(p/j);
    printf("total monkeys in the tree: %d",n);
}
