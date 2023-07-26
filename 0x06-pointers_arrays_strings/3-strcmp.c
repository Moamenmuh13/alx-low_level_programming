#include "main.h"
/**
 * _strcmp - Concatenates src to dest.
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 * Return: A negative, zero, or positive integer depending on the comparison result.
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2) 
{
return *s1 - *s2;
}
s1++;
s2++;
}

return *s1 - *s2;
}
