#include "main.h"
/**
 * print_diagsums - chessboard
 * @a: pointer to start of matrix
 * @size: width of the matrix
*/

void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += *(a + i * size + i);
sum2 += *(a + i * size + (size - i - 1));
}
printf("%d, %d\n", sum1, sum2);
}
