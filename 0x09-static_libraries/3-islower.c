#include "main.h"
/**
 * _islower - print alphas in small-cases
 *
 * @c: the input character to check on it
 *
 * Return: If it return 1 it will be small-char else will be capital
 *
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    else
        return (0);
}
