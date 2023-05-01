#include "lists.h"
/**
 * delete_nodeint_at_index - Delete a node at a given positiion.
 *
 * @head: Pointer of the first node.
 * @index: Position of the node to delete.
 * Return: 1 if it succeeded and -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node;
unsigned int new;

new = 0;
while (*head)
{

if (new == index)
{

node = (*head);
			
(*head) = (*head)->next;
			
free(node);
			
return (1);
}
		
head = &(*head)->next;
new++;
}
return (-1);
}
