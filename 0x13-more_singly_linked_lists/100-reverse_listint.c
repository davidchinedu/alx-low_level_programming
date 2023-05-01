#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *former = NULL;
listint_t *later = NULL;

while (*head)
{
later = (*head)->later;
(*head)->later = former;
former = *head;
*head = later;
}

*head = former;

return (*head);
}
