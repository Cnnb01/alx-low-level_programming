#include "main.h"
#include <ctype.h>
/**
 * string_toupper - Converts all characters of a string to uppercase.
 * @s: The input string.
 *
 * Return: Pointer to the modified string.
 */

char *string_toupper(char *s)
{
char *point = s;
while (*point != '\0')
{
*point = toupper(*point);
point++;
}
return (s);
}
