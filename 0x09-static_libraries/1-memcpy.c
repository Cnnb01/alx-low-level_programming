#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*_memcpy - a function that copies memory area.
*@dest: pointer to the memory location where to copy the data.
*@src:  pointer to the memory location from which to copy the data.
*@n: number of bytes to copy from source to the destination.
*Return: Pointer to the modified memory region.
*Description: a function that copies memory area.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
return (memcpy(dest, src, n));
}

