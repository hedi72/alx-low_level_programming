#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print all numbers separated by separator
 * @separator: pointer to string
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ls;
int should_print_separator = separator != NULL && n > 1;

va_start(ls, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ls, int));
if (should_print_separator && i < n - 1)
{
fputs(separator, stdout);
}
}
putchar('\n');
va_end(ls);
}
