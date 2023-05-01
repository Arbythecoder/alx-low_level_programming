#include "lists.h"
/**
 * ge Pointer to the nth node, or NULL if it does not exist linked list.
 *
 * @head: a pointer to the head of the list.
 * @index: the index of the node starting at 0
 * Return: Pointer to the nth node, or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nthnode;
	unsigned int count;
	/* keep track of the traverse node */
	/* count is the index of the node we´re currently looking at */
	count = 0;
	/* then initialize a pointer to point to the head node */
	/* this pointer will be used for traversing the list */
	nthnode = head;
	/* loop through the linked list */
	while (nthnode != NULL)
	{
		if (count == index)
			return (nthnode);
		count++;
		nthnode = nthnode->next;
	}
	/* if the node does not exist return NULL */
	return (NULL);
}
