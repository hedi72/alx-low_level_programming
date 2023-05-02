#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - return the sum of all the data
 *
 * @head: pointer to the first node of the list
 * Return: the sum of all the data (n) of the linked list,
 * if the list is empty return 0.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
