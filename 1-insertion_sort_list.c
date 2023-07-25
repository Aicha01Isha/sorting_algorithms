#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: parameter
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *next, *prev;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	curr = (*list)->next;
	while (curr)
	{
		next = curr->next;
		while (curr->prev && (curr->n < curr->prev->n))
		{
			prev = curr->prev;
			curr->prev = prev->prev;
			if (curr->prev)
				curr->prev->next = curr;
			else
				*list = curr;
			prev->next = curr->next;
			if (prev->next)
				prev->next->prev = prev;
			curr->next = prev;
			prev->prev = curr;
			print_list(*list);
		}
		curr = next;
	}
}
