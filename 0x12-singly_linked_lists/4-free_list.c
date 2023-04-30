#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: list_t list to free.
 */
void free_list(list_t *head)
{
list_t *new;

new = malloc(sizeof(list_t));
if (new == NULL)
return;
new->next = NULL;

while (head != NULL)
{
new = head;
head = head->next;
free(new->str);
free(new);
}
}
