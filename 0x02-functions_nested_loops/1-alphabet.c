#include "main.h"

/**
*main - check the code
*
*Return: Always 0 (Success)
*/

/**
 * print_alphabet - prints lowercase letters followed by a new line
 *
 * Description: function prints the lowercase alphabet followed by newline.
 */
void print_alphabet(void)
{
char a;
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
}
_putchar('\n');
}
