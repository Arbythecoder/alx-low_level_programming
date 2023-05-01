#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node a linked list
 * @head:  pointer to the head of the linked list
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
listint_t *temp;
int p;
if (*head == NULL)
return (0);

temp = *head;
*head = temp->next;
p = temp->n;
free(temp);
return (p);
}
