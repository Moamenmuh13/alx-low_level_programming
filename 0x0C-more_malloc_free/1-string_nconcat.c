#include "main.h"
#include <stdlib.h>
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
unsigned int len_s1, len_s2, i, j;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[len_s1] != '\0')
len_s1++;

while (s2[len_s2] != '\0')
len_s2++;

if (n >= len_s2)
n = len_s2;

concatenated = malloc(sizeof(char) * (len_s1 + n + 1));

if (concatenated == NULL)
return (NULL);

for (i = 0; i < len_s1; i++)
concatenated[i] = s1[i];

for (j = 0; j < len_s2; j++)
concatenated[j] = s2[j];


concatenated[i + j] = '\0';

return (concatenated);
}
