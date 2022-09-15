// no argument and no return 

#include <stdio.h>

void fact()
{
    int num;

    printf("Enter a positive number to find Factorial\n");
    scanf("%d", &num);

    int count, fact = 1;

    if (num == 0)
    {
        printf("Factorial of 0 is 1 (!0 = 1)\n");
    }
    else
    {
        for (count = 1; count <= num; count++)
        {
            fact = fact * count;
        }

        printf("\nFactorial of %d is %d (!%d = %d)\n", num, fact, num, fact);
    }
}

int main() {
    fact();
    return 0;
}