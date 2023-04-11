#include <stdio.h>

/**
 * main - print the number of arg passed into the program
 * @argc: int
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char **argv)
{
(void) argv;
printf("%d\n", (argc - 1));
return (0);
}
