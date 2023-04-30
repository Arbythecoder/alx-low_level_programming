#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -  adds a new node to beginning of a list_t list
 * @head:  pointer to list_t list
 * @str: string to add in head
 *
 * Return: the address of the new element or NULL for fail
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *node_arby = malloc(sizeof(list_t));
if (node_arby == NULL)
{
return (NULL);
}
node_arby->str = strdup(str);
if (node_arby->str == NULL)
{
free(node_arby);
return (NULL);

}
node_arby->next = *head;
*head = node_arby;
return (node_arby);
}
