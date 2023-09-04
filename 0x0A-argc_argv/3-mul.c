#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
*main - Entry point
*
*@argc: The number of command-line arguments
*@argv: An array containing the command-line arguments
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int mul = 1, a, b;
if (argc < 3)
{
return (-1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
mul = a *b;
printf("%d\n", mul);

return (0);
}

