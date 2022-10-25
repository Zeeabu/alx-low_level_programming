#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index -  function that returns the n
 *	th node of a listint_t linked list
 * @head: pointer to the address of the listint_t list
 * @index: the index of the node, starting at 0
 *
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node;
for (node = 0; node < index; node++)
{
if (head == NULL)
return (NULL);

head = head->next;
}
return (head);
}

