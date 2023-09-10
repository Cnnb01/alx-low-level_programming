#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*argstostr - concatenates all the arguments passed
*@ac: argument count
*@av: argument vector
*Return: pointer to concatenated string
*/
char *argstostr(int ac, char **av)
{
char *ar, *ar2;
int i, j, len = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++;
}

ar = (char *)malloc(len + 1);

if (ar == NULL)
{
return (NULL);
}
ar2 = ar;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
*ar2 = av[i][j];
ar2++;
}
*ar2 = '\n';
ar2++;
}
*ar2 = '\0';
return (ar);
}
