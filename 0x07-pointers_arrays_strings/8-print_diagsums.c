#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - print sums of diags
 *@a: pointer to 2d array
 *@size: size of the array
 */
void print_diagsums(int *a, int size)
{
int i, s1, s2;
s1 = 0;
s2 = 0;
for (i = 0; i < size; i++)
{
s1 = s1 + *(a + (i + i * size));
s2 = s2 + *(a + ((i + 1) * (size - 1)));
}
printf("%d, %d\n", s1 ,s2);
}
