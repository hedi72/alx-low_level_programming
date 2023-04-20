#include "function_pointers.h"
#include <stddef.h>
/**
* array_iterator - exécute une fonction donnée sur un tableau d'entiers
* @array: pointeur vers un tableau d'entiers
* @size: taille du tableau
* @action: pointeur vers une fonction
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
