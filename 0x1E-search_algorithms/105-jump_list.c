#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_list - perform a linear search on a linked list
 * @list: pointer to the first node to search from
 * @value: value to search for
 *
 * Return: pointer to the first node wher value is located, or NULL
 */
listint_t *linear_list(listint_t *list, int value)
{
	while (list != NULL)
	{
		if (list->n > value)
			break;
		printf("Value checked at index [%lu] = [%d]\n",
		       list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}


/**
 * jump_list - Searches for a value in a sorted linked list of integers using
 *             the Jump Search Algorithm
 * @list: pointer to the head of the linked list to search in
 * @size: number of nodes in the linked list
 * @value: Value to search for
 *
 * Return: pointer to the first node where value is lovated, else NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t root = sqrt(size), idx = 0;
	listint_t *temp = list, *prev = NULL;

	if (list == NULL || size < 1)
		return (NULL);

	while (temp->n < value && temp->index < size)
	{
		prev = temp;
		for (idx = 0; idx < root && temp->next != NULL; idx++)
			temp = temp->next;
		printf("Value checked at index [%lu] = [%d]\n",
		       temp->index, temp->n);
		if (temp->next == NULL)
			break;
	}
	if (temp->n >= value || temp->next == NULL)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
		       prev->index, temp->index);
		temp = linear_list(prev, value);
		return (temp);
	}
	return (NULL);
}
