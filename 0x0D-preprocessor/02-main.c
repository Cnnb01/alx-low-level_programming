#include <stdio.h>
#include <stdlib.h>
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
char *fn = __FILE__;
int i;
for (i = 0; fn[i] != '\0'; i++)
{
putchar(fn[i]);
}
putchar('\n');
return (0);
}
