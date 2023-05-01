#include "lists.h"

/**
 *  free_listint_safe - frees a listint_t list.
 *  @h: the pointer to a pointer of head
 *  Returns: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
size_t b = 0;
listint_t *temp;

while (*h != NULL) {
temp = *h;
*h = (*h)->next;
free(temp);
b++;
}

*h = NULL;
return b;
}
