#include "main.h"
/**
 * main - Entry point
 *
 * This function serves as the entry point of the program.
 * It assigns a random number to the variable n and prints
 * whether the number is positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
return (0);
}

