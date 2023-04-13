#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument conter
 * @av: argument value
 * Return: pointer to a string
 */
char *argstostr(int ac, char **av)
{
char *new;
int i, j, len = 0, k = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
j++;
len++;
}
len++;
}

new = malloc(sizeof(char) * (len + 1));
if (new == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
new[k] = av[i][j];
j++;
k++;
}
new[k] = '\n';
k++;
}

new[k] = '\0';
return (new);
}
