#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_numbers - a function that prints numbers, followed by a new line.
*@n: the number of arguments
*@separator: the string to be printed between numbers
*@...: variable number of arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int arg;
if (separator == NULL)
{
return;
}
va_start(args, n);
for (i = 0; i < n; i++)
{
arg = va_arg(args, unsigned int);
printf("%d", arg);
printf("%s", separator);
}
printf("\n");
va_end(args);

}
