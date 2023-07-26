#include "main.h"
/**
 * *_strcat - Concatenates src to dest.
 * @dest: The destination string.
 * @src: The source string to be appended tp dest.
 * 
 * Retrun: A pointer to the resulting string dest.
*/

char *_strcat(char *dest, char *src)
{

char *dest_end = dest;

while (*dest_end != '\0')
dest_end++;

while (*src != '\0')
{
*dest_end = *src;
dest_end++;
src++;
}

*dest_end = '\0';

return (dest);
}