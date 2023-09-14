#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
*free_dog - a function that free dogs.
*@d: pointer to the structure
*/

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
