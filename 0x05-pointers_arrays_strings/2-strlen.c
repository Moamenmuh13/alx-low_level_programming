#include "main.h"
/**
 * _strlen - get the length of the text
 * @s: Pointer to the first integer
 * 
 * Return : Length of the stirng
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return (length);
}
