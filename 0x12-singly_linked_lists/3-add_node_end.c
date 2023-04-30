#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: double pointer to the list_t list
 *
 * Returns: address of the new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *node_arby = malloc(sizeof(list_t));
list_t *new;

if (node_arby == NULL)
{
return (NULL);
}
node_arby->str = strdup(str);
node_arby->len = 0;

while (str[node_arby->len] != '\0'){
node_arby->len++;
}

node_arby->next = NULL;

if (*head == NULL){
*head = node_arby;
return (node_arby);
}
new = *head;

while (new->next != NULL){
new = new->next;
}
new->next = node_arby;

return node_arby;
}
