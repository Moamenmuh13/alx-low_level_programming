#include "main.h"
/**
 * _sqrt_helper - Helper func to calculate the square root recursively.
 * @n: The number for which the square root is to be calculated
 * @low: the lower bound of the range.
 * @high: the upper bound of the range
 * Return: returns the natural square root of a number.
*/
int _sqrt_helper(int n, int low, int high)
{
int mid, mid_squared;

if (low > high)
return (-1);

mid = (low + high) / 2;
mid_squared = mid *mid;

if (mid_squared == n)
return (mid);
else if (mid_squared < n)
return (_sqrt_helper(n, mid + 1, high));
else
return (_sqrt_helper(n, low, mid - 1));
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

if (n == 0)
return (0);

return (_sqrt_helper(n, 0, n));
}
