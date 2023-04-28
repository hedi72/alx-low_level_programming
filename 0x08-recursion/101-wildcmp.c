#include "main.h"
#include <stddef.h>
/**
 * wildcmp - comares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if the string can be considered identical
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*s1 == '\0' && *(s2 + 1) == '\0')
return (1);
else if (*s1 == '\0' || *(s2 + 1) == '\0')
return (0);
else if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
return (1);
else
return (0);
}
else if (*s1 == '\0')
{
if (*s2 == '\0')
return (1);
else
return (0);
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
else
{
return (0);
}
}
