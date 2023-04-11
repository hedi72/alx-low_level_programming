#include <stdio.h>

/**
 * main - prints all args, one argument per line
 * @argc: int
 * @argv: array of string
 * Return: 0
 */
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
