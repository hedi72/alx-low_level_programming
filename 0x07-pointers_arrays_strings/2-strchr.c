#include "main.h"
#include <stddef.h>
/**
*_strchr - returns the s starting from c
*@s: pointer to string
*@c: character
*Return: pointer of first occurence of c
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
