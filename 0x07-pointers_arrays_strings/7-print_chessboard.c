#include "main.h"
/**
 * print_chessboard - chessboard
 * @a: the string that will search in
*/

void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; i < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}

}
