#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: pointer to the string to search in
 * @c: char to search for
 * Return: A pointer to th
*/

char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}

if (*s == c)
{
return (s);
}

return NULL;
}
