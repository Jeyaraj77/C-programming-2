#include <stdio.h>
int prime(int n, int i) {
    if (i == 1)
    {
        return 1;
    }
    else
    {
        if (n % i == 0)
        {
            return 0;
        }
        else
        {
            return prime(n, i-1);
        }
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = prime(num, num-1);
    if (result == 1)
    {
        printf("%d this is prime\n", num);
    }
    else
    {
        printf("%d this is not prime\n", num);
    }
    return 0;
}
