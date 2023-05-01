#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: head of a list
 *
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *current = h;
unsigned int count = 0;

while (current)
{
printf("%d\n", current->n);
count++;
current = current->next;
}
return (count);
}
