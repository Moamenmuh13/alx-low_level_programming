#include "main.h"
/**
 * _strlen - Return the length of the string
 * @s: Pointer to the string whose length is to be caclulated
 * Return: Length of the stirng
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
