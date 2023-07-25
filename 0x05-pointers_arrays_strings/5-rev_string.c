#include "main.h"
#include <string.h>
/**
 * rev_string - Print the string in reverse
 * @s: The string to print in rev
 */
void rev_string(char *s)
{
int start = 0;
int end = strlen(s) - 1;

while (start < end)
{
char temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
}
