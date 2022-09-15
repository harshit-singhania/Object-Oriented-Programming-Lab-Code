// return and no argument

#include <stdio.h>

int factorial();

int main()
{
    int call = factorial();
    printf("%d", call);
    return 0;
}

int factorial()
{
    int num; 
    printf("Enter the number: ");
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

        return fact;
    }
}