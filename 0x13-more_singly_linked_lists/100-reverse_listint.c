#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to the  first node in a linked list
 * Returns: a pointer to the first node of the reversed list
 */


listint_t *reverse_listint(listint_t **head)
{
listint_t *prior = NULL;
listint_t *new = *head;
listint_t *next = NULL;
    
for (; new != NULL; new = next)
{
next = new->next;
new->next = prior;
prior = new;
}
    
*head = prior;
    
return *head;
}
