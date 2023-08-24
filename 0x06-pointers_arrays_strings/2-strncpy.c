#include "main.h"
#include <string.h>
/**
 * _strncpy - Copies 'n' chars from 'src' to 'dest', returns 'dest'
 * @dest: Destination buffer
 * @src: Source string
 * @n: Maximum chars to copy
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
char *point;
point = strncpy(dest, src, n);
return (point);
}
