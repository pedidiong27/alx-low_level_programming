#include "lists.h"

/**
 * free_listint - frees a listint_t file
 * @head: pointer to the head of the listint_t file
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
