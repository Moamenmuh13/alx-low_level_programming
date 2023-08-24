#include <stdio.h>

void print_befor_main(void) __attribute__((constructor));

/**
 * print_befor_main - function that prints a message before main
*/

void print_befor_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
