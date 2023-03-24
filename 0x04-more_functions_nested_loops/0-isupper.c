#include "main.h"

/**
 * _isupper - Check if character is uppercase
 * @c: char to be tested
 *
 * prints a String
 * Return: Always 0 (Success)
 **/

int _isupper(int c)
{
	char x;
	int a = 0;

	for (x = 'A'; x <= 'Z'; x++)
		{
	if (c == x)
	{
	a = 1;
	}
		}
	return (a);
}
