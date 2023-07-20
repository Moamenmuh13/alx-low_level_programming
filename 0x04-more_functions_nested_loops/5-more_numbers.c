#include "main.h"
/**
 * more_numbers - print all numbers from 0 to 14 followed by a new line 10 times
 */

void more_numbers(void)
{
int count, number;

for (count = 1; count <= 10; count++)
{
for (number = 0; number <= 14; number++){
if (number >= 10)
_putchar('1');
_putchar((number % 10) + '0');
}

_putchar('\n');
}
}
