#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the address of the listint_t list
 *
 * Return: Always 0
 */

void free_listint(listint_t *head)
{
listint_t *tmp;
while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
