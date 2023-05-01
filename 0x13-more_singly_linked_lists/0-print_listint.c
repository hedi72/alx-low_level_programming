#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t.
 * @h: pointer to the head of the list.
 * Return: the number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
tmp = h;
while (tmp)
{
printf("%d\n", h->n);
tmp = tmp->next;
count++;
}
return (count);
}
