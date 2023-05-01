#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: pointer to the head of a list
 * Return: sum of all the data (n)
 *         Otherwise - 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
listint_t *new = head;
int calc = 0;

while (new != NULL) {
calc += new->n;
new = new->next;
}

return calc;
}

