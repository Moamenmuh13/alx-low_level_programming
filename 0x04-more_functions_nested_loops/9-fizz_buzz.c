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
for (int i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}

printf("\n");
return (0);
}
