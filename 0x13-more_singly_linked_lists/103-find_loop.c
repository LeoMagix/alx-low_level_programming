#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *   a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *   Otherwise - the address of the node where the loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *to, *ra;

	if (head == NULL || head->next)
		return (NULL);

	to = head->next;
	ra = (head->next)->next;

	while (ra)
	{
		if (to == ra)
		{
			to = head;

			while (to != ra)
			{
				to = to->next;
				ra = ra->next;
			}

			return (to);
		}

		to = to->next;
		ra = (ra->next)->next;
	}

	return (NULL);
}
