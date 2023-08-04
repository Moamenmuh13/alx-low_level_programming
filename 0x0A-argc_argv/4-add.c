#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of argument passed to the program
 * @argv: an array of strings containing the argument
 * Return: 0 on success, 1 if string contians a positive number, 0 otherwise.
*/

int main(int argc, char *argv[])
{
int i, sum = 0;

for (i = 1; i < argc; i++)
{
if (!is_positive_number(argv))
{
printf("Error\n");
return (1);
}

sum += atoi(argv[i]);

}

printf("%d\n", sum);

return (0);
}
