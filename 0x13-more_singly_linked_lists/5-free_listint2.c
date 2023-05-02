#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free a list and setshead to null
 *
 * @head: pointer to the head of the list
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
listint_t *tmp;
if (head == NULL)
return;
while (*head != NULL)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}
*head = NULL;
}
