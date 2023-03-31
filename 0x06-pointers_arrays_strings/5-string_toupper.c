#include "main.h"
/**
*string_toupper - changes lowercase to uppercase
*@st: string
*Return: pointer to char
*/
char *string_toupper(char *st)
{
int i = 0;
while (st[i] != '\0')
{
if (st[i] >= 'a' && st[i] <= 'z')
{
st[i] = st[i] - ('a' - 'A');
}
i++;
}
return (st);
}
