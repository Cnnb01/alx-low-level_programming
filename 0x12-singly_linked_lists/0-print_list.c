#include "lists.h"
/**
* print_list - Prints all the elements of a linked list.
* @h: A pointer to the head of the list.
*
* Return: The number of nodes (elements) in the list.
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
