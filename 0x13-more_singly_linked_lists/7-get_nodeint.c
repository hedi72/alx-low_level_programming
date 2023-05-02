#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - return the nth node if the list.
 * @head: pointer to the head node of the list
 * @index: index of the node to be returned
 *
 * Return: pointer to the nth node of the list, or Null if it doesn't exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *current;

if (!head)
return (NULL);
current = head;
for (i = 0; i < index; i++)
{
if (current)
current = current->next;
else
return (NULL);
}
return (current);
}
