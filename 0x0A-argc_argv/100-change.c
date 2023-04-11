#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive number
 * @argc: int
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char **argv)
{
int cents, c = 0;
if (argc != 2)
{
printf("error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents <= 0)
{
printf("%d\n", 0);
}
else
{
c += cents / 25;
cents %= 25;
c += (cents / 10);
cents %= 10;
c += (cents / 5);
cents %= 5;
c += (cents / 2);
cents %= 2;
c += cents;
printf("%d\n", c);
}
return (0);
}
