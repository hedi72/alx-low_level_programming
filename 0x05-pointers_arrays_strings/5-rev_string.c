#include "main.h"
/**
* rev_string - it reverses a string in r
*@s: pointer to a string
* Return: void
*/
void rev_string(char *s)
{
int j, i = 0;
char x;
while (*(s + i) != '\0')
{
i++;
}
i = i - 1;
for (j = 0; j <= (i / 2); j++)
{
x = *(s + j);
*(s + j) = *(s + (i - j));
*(s + (i - j)) = x;
}
}
 /**
  *void rev_string(char *s)
{
char *start = s;
char *end = s;

// Find the end of the string
while (*end)
{
end++;
}
end--; // Move back one character to exclude the null terminator

// Swap characters from start and end
while (start < end)
{
char temp = *start;
*start = *end;
*end = temp;

start++;
end--;
}
}
**/
