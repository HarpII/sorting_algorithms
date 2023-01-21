#include "sort.h"

/**
 * insertion_sort_list - inserts right unsorted side into left sorted side
 * @list: doubly linked list to sort
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *previous, *nextnode;

	if (list == NULL || !(*list) || (*list)->next == NULL)
		return;
	current = (*list)->next;
	nextnode = current->next;
	while (current)
	{
		if (current->n < current->prev->n)
		{
			previous = current->prev;
			while (previous && (current->n < previous->n))
			{
				if (!(previous->prev))
				{
					previous->prev = current;
					current->prev->next = current->next;
					if (current->next)
						current->next->prev = current->prev;
					current->next = previous;
					current->prev = NULL;
					*list = current;
				}
				else
				{
					current->prev->next = current->next;
					if (current->next)
						current->next->prev = current->prev;
					previous->prev->next = current;
					current->prev = previous->prev;
					previous->prev = current;
					current->next = previous;
				}
				print_list(*list);
				previous = current->prev;
			}
		}
		current = nextnode;
		current ? (nextnode = current->next) : (nextnode = NULL);
	}
}
