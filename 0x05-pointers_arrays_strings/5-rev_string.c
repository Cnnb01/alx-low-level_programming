#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*rev_string - a function that reverses a string.
*@s: The input string.
*
*
*/
void rev_string(char *s)
{
int len, i;
len = strlen(s);
for (i = len - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
