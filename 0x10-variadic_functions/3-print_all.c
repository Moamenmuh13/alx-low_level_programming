#include "variadic_functions.h"

/**
* print_all - Prints numbers followed by a new line
* @format: The string to be printed between numbers
* @...: The variable number of arguments
* Return: void
*/

void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
i++;
continue;
}
if (format[i + 1])
printf(", ");

i++;

}
va_end(args);

printf("\n");
}
