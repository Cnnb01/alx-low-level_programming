#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase letters followed by a new line
 *
 * Description: function prints the lowercase alphabet followed by newline.
 */
void print_alphabet_x10(void)
{
char a;
int i;
for (i = 0 ; i <= 9 ;  i++)
{
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
