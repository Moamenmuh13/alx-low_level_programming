#include "main.h"

/**
 * times_table - print 9 times table
 */

void times_table(void)
{
int num1, num2, result;
for (num1 = 0; num1 <= 9; num1++)
{
for (num2 = 0; num2 <= 9; num2++)
{
result = num1 * num2;
if (num2 == 0)
_putchar('0');
else if (result <= 9)
{
_putchar(' ');
_putchar(result + '0');
}
else
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}

if (num2 != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
