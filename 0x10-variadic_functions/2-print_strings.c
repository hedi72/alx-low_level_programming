#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print all strings separated by separator
 * @separator: pointer to string separator
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ls;
char *string;
int should_print_separator = separator != NULL && n > 1;
va_start(ls, n);

for (i = 0; i < n; i++)
{
string = va_arg(ls, char *);
if (string != NULL)
{
fputs(string, stdout);
}
else
{
fputs("(nil)", stdout);
}
if (should_print_separator && i < n - 1)
{
fputs(separator, stdout);
}
}
putchar('\n');
va_end(ls);
}
