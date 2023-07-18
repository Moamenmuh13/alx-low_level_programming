#include "main.h"
/**
 * print_to_98 - print all number to reach 98
 *
 * @number: the input pramater
 */
void print_to_98(int number)
{
if (number >= 98)
{
while (number > 98)
printf("%d, ", number--);

printf("%d\n", number);
}
else
{
while (number < 98)
printf("%d, ", number++);

printf("%d\n", number);
}
}
