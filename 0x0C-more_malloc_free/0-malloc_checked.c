#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates a memory
 * @b: unsigned int
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
int *i;
i = malloc(b);
if (i == NULL)
{
exit(98);
}
return (i);
}
