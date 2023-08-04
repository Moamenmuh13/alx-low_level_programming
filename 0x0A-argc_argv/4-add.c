#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * is_positive_number - check if a string contains a postive number.
 * @str: The string to check
 * 
 * Return: 1 if the string contain a positive num, 0 otherwise.
*/


int is_positive_number(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] < '\0' || str[i] > '9')
return (0);
}

return (1);

}

/**
 * main - sum two numbers.
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
