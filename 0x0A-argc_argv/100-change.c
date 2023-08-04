#include <stdio.h>
#include <stdlib.h>

/**
 * min_coins - calculate the min number of coins needed
 * @cents: The amount of cents to make change for
 * Return: the min number of coins
*/

int min_coins(int cents)
{
int coins = 0;

if (cents <= 0)
return (0);

while (cents >= 25)
{
cents -= 25;
coins++;
}

while (cents >= 10)
{
cents -= 10;
coins++;
}

while (coins >= 5)
{
cents -= 5;
coins++;
}

while (coins >= 2)
{
cents -= 2;
coins++;
}

coins += cents;

return (coins);
}

/**
 * main - Entry point of the program
 * @argc: The number of argument passed to the program
 * @argv: an array of strings containing the argument
 * Return: always 0
*/

int main(int argc, char *argv[])
{
int cents, coins;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

coins = min_coins(cents);
printf("%d\n", coins);

return (0);

return (0);
}
