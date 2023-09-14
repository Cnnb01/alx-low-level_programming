#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - a function that returns the sum of all its parameters
*@n: the number of arguments
*@...: variable number of arguments
*Return: 0 if no arguments passed else the sum
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int arg, sums = 0;
if (n == 0)
{
return (0);
}
else
{
va_start(args, n);
for (i = 0; i < n; i++)
{
arg = va_arg(args, unsigned int);
sums = sums + arg;
}
va_end(args);
return (sums);
}
}

