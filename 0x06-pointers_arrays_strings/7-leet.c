#include "main.h"
/**
 * leet - Concatenates src to dest.
 * @str: The input string.
 * Return: A pointer to the modified string.
 */

char *leet(char *str)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char replacements[] = "4433007711";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = replacements[j];
break;
}
}
}

return (str);
}
