#include "main.h"
/**
 * _isalpha - check alphas only
 *
 * @c: the input character to check on it
 *
 * Return: If it return 1 it will be a char else will be number
 *
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z')||
(c >= 'A' && c <= 'Z'))
return (1);
else
return (0);

}
