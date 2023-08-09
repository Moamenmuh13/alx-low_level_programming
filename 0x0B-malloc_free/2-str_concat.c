#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the first string:
 * @s2: the second string:
 * Return: A pointer to a newly allocated space in memory
*/

char *str_concat(char *s1, char *s2)
{
unsigned int length1 = 0, length2 = 0, i, j;
char *concat;

if (s1 != NULL)
{
while (s1[length1] != '\0')
length1++;
}

if (s2 != NULL)
{
while (s2[length2] != '\0')
length2++;
}

concat = malloc((length1 + length2 + 1) * sizeof(char));

if (concat == NULL)
return (NULL);

for (i = 0; i < length1; i++)
concat[i] = s1[i];

for (j = 0; j < length2; j++)
concat[i] = s2[j];

concat[i] = '\0';

return (concat);
}
