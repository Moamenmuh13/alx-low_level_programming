#include "main.h"
/**
 * _strpbrk - search for any of  bytes
 * @s: the string
 * @accept: matche with any bytes or null
 * Return:  A pointer to the byte
*/

char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; *s != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
return (s);
}
s++;
}

return (NULL);
}
