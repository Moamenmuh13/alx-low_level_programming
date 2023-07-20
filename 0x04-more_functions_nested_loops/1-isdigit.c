#include "main.h"
/**
 * _isdigit - get all digits only
 * @c: parameter to check if digit or otherwise
 *
 * Return: 1 for digit, 0 for char
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
