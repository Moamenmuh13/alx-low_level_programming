#include "main.h"
/**
 * cap_string - Capitalizes all words
 * @str: The input string.
 * Return: A pointer to the resulting string dest.
 */

char *cap_string(char *str)
{
int i, x;
char separators[] = " \t\n,;.!?\"(){}";

while (*(str + i))
{
if (*(str + i) >= 'a' && *(str + i) <= 'z')
{
if (i == 0)
*(str + i) = *(str + i) - ('a' - 'A');
else
{
for (x = 0; x <= 12; x++) // Change i to x here
{
if (separators[x] == *(str + i - 1))
*(str + i) = *(str + i) - ('a' - 'A');
}
}
}
i++;
}
return (str);
}
