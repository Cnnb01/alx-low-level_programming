#include <stdio.h>
#include <ctype.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
char a;
for (a = 'a' ; a <= 'z' ; a++)
{
putchar (a);
}
for (a = 'a' ; a <= 'z' ; a++)
{
putchar (toupper(a));
}
putchar ('\n');
return (0);

}
