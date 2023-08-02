#include "main.h"
/**
 * _sqrt_helper - Helper func to calculate the square root recursively.
 * @n: The number for which the square root is to be calculated
 * @guess: the current guess for the square root.
 * Return: returns the natural square root of a number.
*/
int _sqrt_helper(int n, int guess)
{
if (guess * guess == n)
return (guess);

if (guess * guess > n)
return (-1);

return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The number which the square root is to be calculated
 * Return: returns the natural square root of a number.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (_sqrt_helper(n, 0));
}
