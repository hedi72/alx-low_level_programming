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
const listint_t *tmp;

tmp = h;
if (h == NULL)
{
return (0);
}
while (tmp)
{
printf("%d\n", tmp->n);
count++;
tmp = tmp->next;
}
return (count);
}
