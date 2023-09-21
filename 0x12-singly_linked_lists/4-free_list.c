#include "lists.h"
/**
*
*/
void free_list(list_t *head)
{
list_t *pcurrent = head;
while (pcurrent != NULL)
{
list_t *temp = pcurrent;
pcurrent = pcurrent->next;
free(pcurrent->str);
free(temp);
}
}
