#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete the head node of a listint_t
 * @head: pointer to head node of linked list
 * Return: the head node's data, or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int n;
if(*head == NULL)
return (0);
tmp = *head;
*head = (*head)->next;
n = tmp->n;
free(tmp);
return (n);
}
