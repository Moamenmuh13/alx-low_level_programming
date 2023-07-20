#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * 
 * Description: print numbers from 1 to 100 
 * Fizz for mul of 3, buzz for mul of 5
 * FizzBuzz for mul 3 and 5 togther
 * 
 * Return: Always 0 (Success)
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%i", i);
}
printf("\n");
return (0);
}
