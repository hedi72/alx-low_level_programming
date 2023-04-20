#include "function_pointers.h"
#include <stddef.h>
/**
* int_index - recherche un entier dans un tableau et renvoie son index
* @array: pointeur vers un tableau d'entiers
* @size: taille du tableau
* @cmp: pointeur vers une fonction de comparaison
* Return: index de l'entier dans le tableau
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
