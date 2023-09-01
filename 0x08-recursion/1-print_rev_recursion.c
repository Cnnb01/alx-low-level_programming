#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_print_rev_recursion - a function that reverses a string.
*@s: The input string.
*
*
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}

