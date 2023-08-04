#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of argument passed to the program
 * @argv: an array of strings containing the argument
 * Return: 0 on success, 1 if the program dosen't receive two arguments.
*/

int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc != 3)
{
printf("Error\n")
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

result = num1 *num2;
printf("%d\n", result);


return (0);
}
