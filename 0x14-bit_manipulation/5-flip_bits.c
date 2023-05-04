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
unsigned int nbits;

for (nbits = 0; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
nb++;
}

return (nb);
}
