#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the linked list
 *
 * Return: number of nodes in the list
 */


size_t print_listint_safe(const listint_t *head)
{
size_t i = 0;
const listint_t *current;

for (current = head; current != NULL; current = current->next)
    {
printf("%d\n", current->n);
i++;
if (current->next <= current)
{
exit(98);
}
}

return i;
}
