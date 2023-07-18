#include "main.h"
/**
 * print_last_digit - Print the last digit.
 *
 * @n: the input to print
 *
 * Return: the last digit.
 *
 */
int print_last_digit(int n)
{
int digit = n % 10;

if (digit < 0)
digit *= -1;

_putchar(digit + '0');

return (digit);
}
