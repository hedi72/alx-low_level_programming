#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory
 * @d: pointer to the dog_t
 */

void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}
