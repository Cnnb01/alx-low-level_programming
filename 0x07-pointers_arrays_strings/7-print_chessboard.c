#include "main.h"
#include <stdio.h>
/**
*print_chessboard -  a function that prints the chessboard
*@a: The chessboard array
*/
void print_chessboard(char (*a)[8])
{
int r, c;
for (r = 0 ; r <= 7 ; r++)
{
for (c = 0 ; c <= 7 ; c++)
{
putchar(a[r][c]);
}
putchar('\n');
}
}

