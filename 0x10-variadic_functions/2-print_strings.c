#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_strings - a function that prints strings, followed by a new line.
*@n: the number of arguments
*@separator: the string to be printed between numbers
*@...: variable number of arguments
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *arg;

va_start(args, n);

for (i = 0; i < n; i++)
{
arg = va_arg(args, char *);
if (arg == NULL)
{
printf("nil");
}
printf("%s", arg);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

printf("\n");
va_end(args);
}
