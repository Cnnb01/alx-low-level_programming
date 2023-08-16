#include "main.h"
/**
*print_times_table - this function prints out the table of any given value n
*@n:  The value specifying the upper limit of the times table.
*o - represents the number of columns
*@i - represents the number of rows
*@p - represents the product
*
*Description: a function that prints the n times table, starting with 0.
*/
void print_times_table(int n)
{
int o, i, p;

if (n > 15 || n < 0)
{
return;
}
else
{
for (o = 0 ; o <= n ; o++)
{
for (i = 0 ; i <= n ; i++)
{
p = i * o;
if (o > 0)
{
_putchar(',');
_putchar(' ');
}
if (p < 10)
{
_putchar(' ');
_putchar(' ');
}
else if (p >= 10 && p < 100)
{
_putchar(' ');
}
_putchar(p / 100 + '0');
_putchar(p / 10 % 10 + '0');
_putchar(p % 10 + '0');
}
_putchar('\n');
}
}
}
