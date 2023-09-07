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
int amnt, coins = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
amnt = atoi(argv[1]);
if (amnt < 0)
{
printf("0\n");
return (0);
}
while (amnt > 0)
{
if (amnt >= 25)
{
amnt -= 25;
coins++;
}
else if (amnt >= 10)
{
amnt -= 10;
coins++;
}
else if (amnt >= 5)
{
amnt -= 5;
coins++;
}
else if (amnt >= 2)
{
amnt -= 2;
coins++;
}
else if (amnt >= 1)
{
amnt -= 1;
coins++;
}
}
printf("%d\n", coins);
return (0);
}
