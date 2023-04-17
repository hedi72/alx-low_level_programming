#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes a struct dog with the provided values
 * @d: Pointer to struct dog to be initialized.
 * @name: pointer to a char array representing the name.
 * @age: Float representing the age
 * @owner: pointer to a char array representing the owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
