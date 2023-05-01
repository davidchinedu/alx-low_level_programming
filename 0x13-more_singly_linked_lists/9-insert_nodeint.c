#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int j;
listint_t *fresh;
listint_t *pres = *head;

fresh = malloc(sizeof(listint_t));
if (!fresh || !head)
return (NULL);

fresh->n = n;
fresh->next = NULL;

if (idx == 0)
{
fresh->next = *head;
*head = fresh;
return (fresh);
}

for (j = 0; temp && j < idx; i++)
{
if (j == idx - 1)
{
fresh->next = pres->next;
pres->next = fresh;
return (fresh);
}
else
pres = pres->next;
}

return (NULL);
}
