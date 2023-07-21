#include <stdio.h>
#include <string.h>
int main ()
{
	char str[100];
    printf("Enter the string : ");
	scanf("%s",&str);
	char temp;
	int i,j;
	int n=strlen(str);
	for (i=0;i<n;i++)
        {
		for (j=i+1;j<n;j++)
		{
			if (str[i]>str[j])
			 {
					temp = string[i];
					str[i] = str[j];
					str[j] = temp;
			}
		}
	}

	printf("The sorted string is : %s", string);
	return 0;
}
