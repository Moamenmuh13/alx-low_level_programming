#include "main.h"
/**
 * _isUpper - get all upercase letters
 *
 * @c: parameter to check if letter is cap or small
 *
 * Return: 1 for uppercase, 0 for smallcase 
 */

int _isUpper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    else
        return (0);
}