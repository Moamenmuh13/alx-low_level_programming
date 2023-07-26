#include "main.h"
/**
 * *_strcpy - Print all alements of an array
 * @dest: the destination buffer
 * @src: the source starting te be copied
 * Return: The pointer to the destination buffer (dest).
 */

char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

    return (dest);
}
