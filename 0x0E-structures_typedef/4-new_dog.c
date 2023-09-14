#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
*new_dog - a function that creates a new dog.
*@name: name of the dog
*@age: age of the dog
*@owner: owner of the dog
*Return: returns pointer to string
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog2 = (dog_t *) malloc(sizeof(dog_t));
if (new_dog2 == NULL)
{
return (NULL);
}
new_dog2->name = strdup(name);
new_dog2->age = age;
new_dog2->owner = strdup(owner);

return (new_dog2);
}

