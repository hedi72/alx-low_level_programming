#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 * @n: first param
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;
va_list ls, ls_copy;
if (n == 0)
{
return (0);
}
va_start(ls, n);
va_copy(ls_copy, ls);
sum = 0;
for (i = 0; i < n; i++)
{
sum += va_arg(ls_copy, unsigned int);
}
va_end(ls);
va_end(ls_copy);

return (sum);
}
