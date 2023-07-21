#include "main.h"
/**
 * print_number - print number
 * @n : Parameter for number
 */

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n--;
}

if (n / 10 != 0)
{
print_number(n / 10);
}
_putchar(n % 10 + '0');

}
