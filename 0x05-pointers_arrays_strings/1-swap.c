#include "main.h"

/**
 * swap_int - Entry point
 * takes 2 integers and swaps them
 * @a: integers to be swapped
 * @b: integers to be swapped
 * Return: void
 **/


void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
