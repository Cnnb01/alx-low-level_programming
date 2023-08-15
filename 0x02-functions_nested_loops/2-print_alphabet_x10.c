#include <stdio.h>

/**
*main - check the code
*
*Return: Always 0 (Success)
*/

/*function declaration*/
void print_alphabet(void);

int main(void)
{
/*calling func,printing out func,returning value*/
print_alphabet();
return (0);
}

/**
 * print_alphabet - prints lowercase letters followed by a new line
 *
 * Description: function prints the lowercase alphabet followed by newline.
 */
void print_alphabet(void)
{
char a;
int i;
for (i = 0 ; i <= 10 ;  i++)
{
for (a = 'a' ; a <= 'z' ; a++)
{
putchar(a);
}
putchar('\n');
}
}
