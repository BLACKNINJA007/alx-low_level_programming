#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	void free_listint(listint_t *head)

		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
}

