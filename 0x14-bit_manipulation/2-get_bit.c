#include "main.h"

/**
 * get_bit - gives the bit at a given index
 * @n: unsigned number
 * @index: index of the bit starting from 0
 * Return: the bit, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
return ((n >> index) & 1);
}
