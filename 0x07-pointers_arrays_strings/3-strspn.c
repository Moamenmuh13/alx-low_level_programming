#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: Pointer to the string to search in
 * @accept: Pointer to the string containing acceptable chars
 * Return: the number of bytes in the initial segment of 's'.
*/

unsigned int _strspn(char *s, char *accept);
{
unsigned intt count = 0;
int found;

while (*s != '\0')
{
found = 0;
while ((accept != '\0'))
{
if (*s == *accept)
{
found = 1;
break;
}
accept++;
}

if (!found)
break;

count++;
s++;
accept = accept - count + 1;
}
return (count);
}
