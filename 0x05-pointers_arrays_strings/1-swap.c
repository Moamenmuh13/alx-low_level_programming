#include "main.h"
/**
 * swap_int - update the value pointed to by a pointer to 98.
 * @a: Pointer to the first integer
 * @b: Pointer to the first integer
 */
void swap_int(int *a, int *b)
{
    *a = *b;
    *b = *a;
}
