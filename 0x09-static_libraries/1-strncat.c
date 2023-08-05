#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
int c, i;

c = 0;

while (dest[c])
c++;


for (i = 0; i < n && src[i] != '\0'; i++)
dest[c + 1] = src[i];

dest[c + 1] = '\0';


return (dest);
}