#include "main.h"
/**
 * is_divisible - helper func to check if n is divisible by div
 * @n: The number to be checked
 * @div: The divsor to check agianst n
 * Return: 1 if n is divisible to by div, otherwise 0.
*/
int is_divisible(int n, int div)
{
if (div * div > n)
return (0);

if (n % div == 0)
return (1);

return (is_divisible(n, div + 1));
}

/**
 * is_prime_number - helper func to check if n is divisible by div
 * @n: The number to be checked
 * Return: 1 if n is divisible to by div, otherwise 0.
*/
int is_prime_number(int n)
{
if (n <= 1 || n % 2 == 0)
return (0);

if (n == 2)
return (1);

return (!is_divisible(n, 3));

}
