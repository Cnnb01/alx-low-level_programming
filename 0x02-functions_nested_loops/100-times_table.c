#include "main.h"
/**/
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
p = i * o ;
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
_putchar(p + '0');
}
_putchar('\n');
}
}
}
