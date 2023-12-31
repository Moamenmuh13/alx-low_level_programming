#include <stdio.h>

/**
 * main - entry point
 *      Description: print numbers from 1 to 100
 *      number that mul of 3 print Fizz
 *      number that mul of 5 print Buzz
 *      number that mul of 3 and 5 print FizzBuzz
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int num;

    for (num = 1; num <= 100; num++)
    {
        if (num % 3 == 0 && !(num % 5 == 0))
            printf("Fizz");
        else if (num % 5 == 0 && !(num % 3 == 0))
            printf("Buzz");
        else if (num % 3 == 0 && num % 5 == 0)
            printf("FizzBuzz");
        else
            printf("%d", num);

        if (num != 100)
            printf(" ");
        else
            printf("\n");
    }

    return (0);
}
