#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char const *argv[])
{
int i, bytes;
unsigned char *main_ptr = (unsigned char *)main;
if (argc != 2)
{
printf("Error\n");
return (1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
return (2);
}

for (i = 0; i < bytes; i++)
{
printf("%02x", main_ptr[i]);
if (i < bytes - 1)
printf(" ");

printf("\n");
}
return (0);
}
