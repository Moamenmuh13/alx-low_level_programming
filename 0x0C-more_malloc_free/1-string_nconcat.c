#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Create an array of chars
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes from s2
 * Return: A pointer to the newly allocated concatenated string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concatenated;
unsigned int len_s1, len_s2, total_length;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

len_s1 = strlen(s1);
len_s2 = strlen(s2);

if (n >= len_s2)
n = len_s2;

total_length = len_s1 + n + 1;

concatenated = malloc(total_length);

if (concatenated == NULL)
return (NULL);

strncpy(concatenated, s1, len_s1);
strncpy(concatenated + len_s1, s2, n);

return (concatenated);
}
