#include "main.h"
/**
*_strncpy - copies the second string into the first but according to n
*@dest: pointer to the first string
*@src: pointer to the second string
*@n: number of taken elements from second string
*Return: pointer to char
*/

char *_strncpy(char *dest, const char *src, int n)
{
int len = 0;
while (len < n && src[len] != '\0')
{
len++;
}
for (int j = 0; j < len; j++)
{
*(dest + j) = *(src + j);
}
for (int j = len; j < n; j++)
{
*(dest + j) = '\0';
}
return (dest);
}
