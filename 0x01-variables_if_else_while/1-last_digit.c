#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * This function serves as the entry point of the program.
 * It assigns a random number to the variable n and prints
 * the last digit of the number along with a corresponding message.
 *
 * Return: Always 0 (Success)
 */
{
    int n;

    srand(time(0));
    n = rand();

    printf("Last digit of %d is %d and is ", n, n % 10);

    if (n % 10 > 5)
        printf("greater than 5\n");
    else if (n % 10 == 0)
        printf("0\n");
    else
        printf("less than 6 and not 0\n");

    return (0);
}
