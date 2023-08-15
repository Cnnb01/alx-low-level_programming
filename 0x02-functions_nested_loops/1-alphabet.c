#include <stdio.h>

/**
*main - check the code
*
*Return: Always 0 (Success)
*/

/*function declaration*/
void print_alphabet(void);
void _putchar(char a);

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

/**
 * _putchar - performs the putchar function
 *@c: the character to be output
 * Description: this function defines _putchar function
 */
void _putchar(char a)
{
putchar(a);
}
