#include "variadic_functions.h"

/**
* print_numbers - Prints strings followed by a new line
* @separator: The string to be printed between the strings
* @n: The number of strings passed to the function
* @...: The variable number of arguments
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);

if (str != NULL)
printf("%s", str);
else
printf("(nil)");


if (separator != NULL && i < n - 1)
printf("%s", separator);
}

va_end(args);

printf("\n");
}
