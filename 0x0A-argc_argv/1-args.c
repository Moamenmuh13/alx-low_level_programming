#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: The number of argument passed to the program
 * @argv: an array of strings containing the argument
 * Return: always 0
*/

int main(int argc, char *argv[])
{
(void)argv;

printf("%d\n", argc - 1);

return (0);
}
