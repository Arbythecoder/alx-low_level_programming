#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: head pointer
 *
 * Return: number of h element
 */

size_t list_len(const list_t *h)
{
size_t arby_count = 0;
while (h != NULL)
{
arby_count++;
h = h->next;
}
return (arby_count);
}
