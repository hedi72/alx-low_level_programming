#include "lists.h"
/**
 * free_list - Frees a list_t.
 * @head: A pointer to the head of the list_t.
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp->str);
free(tmp);
}
}
