#include <stdio.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0; // Counter for the number of nodes

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return count;
}
