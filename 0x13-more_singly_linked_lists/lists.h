#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stddef.h>

/**
 * listint_s - singly linked list
 * @n: int
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 * for alx-holberton project
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif
