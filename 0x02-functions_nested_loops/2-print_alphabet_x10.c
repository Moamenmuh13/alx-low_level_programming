#include "main.h"
/**
 * print_alphabet_x10 - print all alphabet 10 times in small-case
 */
void print_alphabet_x10(void)
{
char letter;
int count;
for (count = 1; count <= 10; count++)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar('\n');
}
}
