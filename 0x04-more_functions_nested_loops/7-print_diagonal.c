#include "main.h"
/**
*print_diagonal - a function that draws a diagonal line on the terminal.
*@n: the number of times the character _ should be printed
*Description: a function that draws a diagonal line on the terminal.
*/
void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n ; i++)
{
for (j = 0 ; j < i ; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
