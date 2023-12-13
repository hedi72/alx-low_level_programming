#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_list - perform a linear search on a linked list
 * @list: pointer to the first node to search from
 * @value: value to search for
 *
 * Return: pointer to the first node wher value is located, or NULL
 */
skiplist_t *linear_list(skiplist_t *list, int value)
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
 * linear_skip - search for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located, else NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *temp;

	if (list == NULL)
		return (NULL);
	temp = list;
	while (temp->n < value && temp->express)
	{
		prev = temp;
		temp = temp->express;
		printf("Value checked at index [%lu] = [%d]\n",
		       temp->index, temp->n);
	}
	if (temp->express == NULL && temp->n < value)
	{
		prev = temp;
		while (temp->next != NULL)
			temp = temp->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, temp->index);
	return (linear_list(prev, value));
}
