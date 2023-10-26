#include "main.h"
/**
* get_endianness - Checks the endianness of the machine
*
* Return: 0 for big endian, 1 for little endian
*/
int get_endianness(void)
{
int num = 1;
char *ptr = (char*) &num;
if (* ptr)
{
return (0);
}
else
{
return (1);
}
}
