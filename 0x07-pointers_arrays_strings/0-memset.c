#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_memset - a function that fills memory with a constant byte.
*@s: pointer to the start of the memory region to fill with a value
*@b: value to set each byte in the memory region to.
*@n: number of bytes to fill with the specified value
*Description: a function that fills memory with a constant byte.
*Return: Always 0 (Success)
*/
char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));

}
