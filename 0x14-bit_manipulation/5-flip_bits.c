#include "main.h"
/**
 * flips_bits - returns the number of bits 
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
unsigned int count = 0;
while (diff)
{
count += diff & 1;
diff = diff >> 1;
}
return (count);
}
