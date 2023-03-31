#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - détermine si n est un caractère ASCII imprimable
 * @n: entier
 * Retourne: 1 si vrai, 0 sinon
 */
int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - affiche les valeurs hexadécimales pour la chaîne b sous forme formatée
 * @b: chaîne à afficher
 * @start: position de départ
 * @end: position de fin
 */
void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - affiche les valeurs ASCII pour la chaîne b,
 * formaté pour remplacer les caractères non imprimables par '.'
 * @b: chaîne à afficher
 * @start: position de départ
 * @end: position de fin
 */
void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableASCII(ch))
			ch = '.';
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - affiche un tampon
 * @b: chaîne
 * @size: taille du tampon
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printf(" ");
			printASCII(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
