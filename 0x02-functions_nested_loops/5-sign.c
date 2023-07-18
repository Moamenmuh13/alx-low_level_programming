#include "main.h"
/**
 * print_sign - check alphas only
 *
 * @n: the input character to check on it
 *
 * Return: If it return 1 it will be a char else will be number
 *
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}

}
