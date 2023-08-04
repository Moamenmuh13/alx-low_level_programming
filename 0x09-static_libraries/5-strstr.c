#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: the string that will search in
 * @needle: the string we search for
 * Return:  A pointer to the beginning of the substring
 * or NULL
*/

char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (!needle[j])
return (&haystack[i]);
}

return (NULL);
}
