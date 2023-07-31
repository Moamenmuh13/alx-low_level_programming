#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to the memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 * Return: A pointer to the memory area.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
