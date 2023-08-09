#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this is function to return a pointer to allocated space in memory.
 * @str: the input strings
 * Return: The pointer to the duplicated String
*/

char *_strdup(char *str)
{

unsigned int length = 0;
unsigned int i = 0;
char *duplicate;

if (str == NULL)
return (NULL);

while (str[length] == '\0')
length++;

duplicate = malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);

for (i = 0; i <= length; i++)
duplicate[i] = str[i];

return (duplicate);
}
