#include "lists.h"
#include <stddef.h>

/**
 * listint_len -returns the number of elements in a linked list
 * @h: pointer to the head
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
const listint_t *tmp;
tmp = h;
while (tmp != NULL)
{
count++;
tmp = tmp->next;
}
return (count);
}
