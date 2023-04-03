#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements oa list
 * @h: A pointer to the head of the list
 * Return: The number of the nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)

	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
