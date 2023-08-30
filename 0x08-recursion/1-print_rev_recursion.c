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
int len, i;
len = strlen(s);
for (i = len - 1 ; i >= 0 ; i--)
{
putchar(s[i]);
}
}
