#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_char(va_list c)
{
putchar(va_arg(c, int));
}

void print_integer(va_list i)
{
printf("%d", va_arg(i, int));
}

void print_float(va_list f)
{
printf("%f", va_arg(f, double));
}

void print_string(va_list st)
{
char *string = va_arg(st, char *);
if (string == NULL)
{
string = "(nil)";
}
printf("%s", string);
}

void print_all(const char * const format, ...)
{
my_str mytypes[] = {
{"c", print_char},
{"i", print_integer},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
};

va_list ls;
unsigned int i = 0;
char separator = '\0';
unsigned int j = 0;
va_start(ls, format);

while (format && format[i])
{
j = 0;
while (mytypes[j].letter != NULL)
{
if (format[i] == *(mytypes[j].letter))
{
if (separator != '\0')
{
putchar(separator);
}

mytypes[j].f(ls);
separator = ',';
break;
}
j++;
}

i++;
}

va_end(ls);
putchar('\n');
}
