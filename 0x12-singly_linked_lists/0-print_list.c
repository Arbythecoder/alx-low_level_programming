#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the list of all elements
 * @h: head point to the list_t list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
size_t arby_count = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0], (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
arby_count++;
}
return (arby_count);
}
