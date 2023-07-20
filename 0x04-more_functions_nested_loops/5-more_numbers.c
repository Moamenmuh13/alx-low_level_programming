#include "main.h"
/**
 * more_numbers - print all numbers from 0 to 14 followed by a new line 10 times
 */

void more_numbers(void)
{
int number, count;

for (count = 0; count <= 10; count++)
{
for (number = 0; number <= 14; number++){
if (number > 9)
{
_putchar('0' + (number / 10));
    }
_putchar('0' + (number % 10));

}
_putchar('\n');
}
}
