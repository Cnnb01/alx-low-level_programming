#include "main.h"
#include <string.h>
/**/
void puts2(char *str)
{
int len, i;
len = strlen(str);
for (i = 0 ; i <= len ; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);	
}
}

}
