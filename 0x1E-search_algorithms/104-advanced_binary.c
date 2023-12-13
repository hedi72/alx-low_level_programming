#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * display_array - prints an array of integers
 * @array: array to print
 * @size: size of array
 *
 * return: void
 */
void display_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
}


/**
 * advanced_binary - searches for value in a sorted array of integers using the
 *                   Binary Search Algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t mid = 0;
	int res = -1, val = 0;

	if (array == NULL || size < 1)
	{
		return (-1);
	}
	else
	{
		display_array(array, size);
		mid = (size - 1) / 2;
		val = array[mid];
		if (val < value)
		{
			res = advanced_binary(array + mid + 1, size - (mid + 1),
					      value);
			if (res >= 0)
				res += mid + 1;
		}
		else if (val > value)
		{
			res = advanced_binary(array, mid + 1, value);
		}
		else if (mid == 0 || array[mid - 1] < val)
		{
			res = mid;
		}
		else
		{
			res = advanced_binary(array, mid + 1, value);
		}
	}
	return (res);
}
