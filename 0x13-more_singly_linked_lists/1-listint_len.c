#include "lists.h"

/**
 * listint_len - Calculate the number of elements in a linked list
 * @h: Pointer to to the head of a list
 * Return: Integer.
 *
 **/

size_t listint_len(const listint_t *h)
{
const listint_t *temp;
unsigned int counter = 0;

temp = h;
while (temp)
{
counter++;
temp = temp->next;
}
return (counter);
}
