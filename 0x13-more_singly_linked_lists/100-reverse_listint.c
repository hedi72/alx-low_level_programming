#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a list
 * @head: pointer to head node of list
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next;
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
