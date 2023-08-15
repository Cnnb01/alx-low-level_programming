#include "main.h"
/**
*times_table - a function that prints the 9 times table, starting with 0.
*/
void times_table(void)
{
int o, i, p;
for (o = 0 ; o < 10 ; o++)
{
for (i = 0 ; i < 10 ; i++)
{
p = o * i;

if (i == 0)
{
_putchar((p % 10) + '0');
}
else
{
if (p < 10)
{
_putchar(' ');
}
else
{
_putchar((p / 10) + '0');
}
_putchar((p % 10) + '0');
}
if (i != 9)
{
_putchar(',');
_putchar(' ');

}
}
_putchar('\n');
}
}
