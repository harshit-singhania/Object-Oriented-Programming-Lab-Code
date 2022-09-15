// having argument and no return 

#include <stdio.h>
#include <stdlib.h>

void factorial(int n)
{
    int i;
    unsigned long long fact = 1;
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for (i = 1; i <= n; ++i)
        {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }
}
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    factorial(n);
    return 0;
}