#include "main.h"
/**
 * _isupper - get all upercase letters only
 * @c: parameter to check if letter is cap or small
 *
 * Return: 1 for uppercase, 0 for smallcase
 */

int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}
