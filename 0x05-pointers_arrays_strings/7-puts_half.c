#include "main.h"
#include <string.h>
/**
 * puts_half - Print the second half of a string
 * @str: The input string
 */
void puts_half(char *str)
{
    int length = strlen(str);
    int start = length / 2;

    if (length % 2 != 0)
        start++;

    while (str[start] != '\0')
    {
        _putchar(str[start]);
        start++;
    }

    _putchar('\n');
}
