#include "main.h"
/**
* puts_half - it gives the last half of a string
*@str: pointer to a string
* Return: void
*/
void puts_half(char *str)
{
int j, l = 0;
while (*(str + l) != '\0')
{
l++;
}
if (l % 2 == 0)
{
j = l / 2;
}
else
{
j = (l - 1) / 2;
j++;
}
for (; j < l; j++)
{
_putchar(*(str + j));
}
_putchar('\n');
}

/**
*void puts_half(char *str)
{
int l = 0;
char *s = str;
while (*s != '\0') {
l++;
s++;
}
int j = l % 2 == 0 ? l / 2 : (l + 1) / 2;
for (; j < l; j++) {
putchar(*(str + j));
}
putchar('\n');
}
**/
