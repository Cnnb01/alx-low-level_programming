#include "main.h"
/**
*print_triangle - function that prints a triangle, followed by a new line.
*@size: the number of times the character _ should be printed
*Description: function that prints a triangle, followed by a new line.
*/
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
for (i = 0; i < size ; i++)
{
for (j = size - 1 ; j > i ; j--)
{
_putchar(' ');
}
for (j = 0 ; j <= i ; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
