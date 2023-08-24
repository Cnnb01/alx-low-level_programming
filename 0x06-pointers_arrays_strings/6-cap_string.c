#include "main.h"
#include <ctype.h>
/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: The input string.
 *
 * Return: Pointer to the modified string.
 */

char *cap_string(char *s)
{
char *point = s;
int capitalize = 1;

while (*point != '\0')
{
if (capitalize && (*point >= 'a' && *point <= 'z'))
{
*point = toupper(*point);
capitalize = 0;
}
else if (*point == ' ' || *point == '\t' || *point == '\n' ||
	*point == ',' || *point == ';' || *point == '.' ||
	*point == '!' || *point == '?' || *point == '"' ||
	*point == '(' || *point == ')' || *point == '{' ||
	*point == '}')
{
capitalize = 1;
}
else
{
capitalize = 0;
}
point++;
}
return (s);
}
