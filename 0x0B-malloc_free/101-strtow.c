#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - function that splits a string into words.
 * @str: given string.
 * Return: number of words.
 */
char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return (NULL);
int i, j, k, len, word_count;
char **words;
for (i = 0, len = 0, word_count = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
word_count++;
len++;
}
if (word_count == 0)
return (NULL);
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
for (i = 0, word_count = 0; i < len; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
;
words[word_count] = malloc((j - i + 1) * sizeof(char));
if (words[word_count] == NULL)
{
for (k = 0; k < word_count; k++)
free(words[k]);
free(words);
return (NULL);
}
for (int x = i, y = 0; x < j; x++, y++)
{
words[word_count][y] = str[x];
}
words[word_count][j - i] = '\0';
word_count++;
i = j;
}
}
words[word_count] = NULL;
return (words);
}
