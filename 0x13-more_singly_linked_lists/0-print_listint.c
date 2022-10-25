#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a list_int_t list
 * @h: Pointer to the head of the list_t list
 *
 * Return: The num ber of nodes in the list_t lists
 */

size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
h = h->next;
printf("%d\n", h->n);
nodes++;
}
return (nodes);
}
