#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
*main - Entry point
*
*@argc: The number of command-line arguments
*@argv: An array containing the command-line arguments
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int add = 0, i, j;
if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
add += atoi(argv[i]);
}
printf("%d\n", add);

return (0);
}
