#include "main.h"
/**
* print_most_numbers - print all numbers from 0 to 9 followed by a new line except 2 and 4
*/
void print_most_numbers(void)
{
int number;

for (number = 0; number <= 9; number++)
{
if (number == 2 || number == 4)
continue;
else
_putchar(number + '0');
}
_putchar('\n');
}
