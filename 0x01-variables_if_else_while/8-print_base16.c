#include <stdio.h>
#include <ctype.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
char a;
for (n = 0 ; n < 10 ; n++)
{
putchar (n + '0');
}
for (a = 'a' ; a < 'g' ; a++)
{
putchar (a);
}
putchar ('\n');
return (0);

}
