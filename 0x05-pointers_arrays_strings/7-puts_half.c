#include "main.h"
#include <string.h>
/**
*puts_half -function that prints half of a string, followed by a new line.
*@str: input string
*
*/
void puts_half(char *str)
{
int i, n, length_of_the_string;
/*n1 = (length_of_the_string - 1) / 2;*/
length_of_the_string = strlen(str);
n = (length_of_the_string) / 2;
for (i = n ; i < length_of_the_string ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
