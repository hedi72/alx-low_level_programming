#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - reallocates a memory 
 * @ptr: pointer to the memory
 * @old_s: size of the allocated
 * @new_s: new size of the new memory
 *
 * Return: pointer to the reallocated
 */

void *_realloc(void *ptr, unsigned int old_s, unsigned int new_s)
{
  unsigned int i;
void *new_ptr;
if (new_s == old_s)
return (ptr);
if (ptr == NULL)
{
new_ptr = malloc(new_s);
if (new_ptr == NULL)
return (NULL);
free(ptr);
return (new_ptr);
}

if (new_s == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_s);
if (new_ptr == NULL)
return (NULL);

if (new_s > old_s)
{
for ( i = 0; i < old_s; i++)
*((char *)new_ptr + i) = *((char *)ptr + i);
}
else
{
for (i = 0; i < new_s; i++)
*((char *)new_ptr + i) = *((char *)ptr + i);
}

free(ptr);
return (new_ptr);
}
