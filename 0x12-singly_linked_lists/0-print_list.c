#include "lists.h"
/**
*
*
*/
size_t print_list(const list_t *h)
{
const list_t *p = h;
size_t count = 0;
if (h == NULL)
{
printf("[0] (nil)\n");
return (0);
}
while (p != NULL)
{
printf("[%d] %s\n", p->len, p->str);
p = p->next;
count++;
}
return (count);
}
