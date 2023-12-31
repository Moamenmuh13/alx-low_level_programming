#include "main.h"
/**
 * _strncpy - Concatenates src to dest.
 * @dest: The destination string.
 * @src: The source string to be appended tp dest.
 * @n: The maximum number of bytes to be copied from src.
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && *(src + i); i++)
*(dest + i) = *(src + i);

while (i < n)
{
*(dest + i) = '\0';
i++;

}
return (dest);
}
