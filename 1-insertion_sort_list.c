#include "sort.h"

/**
 * insertion_sort_list - Function used for insertion
 * sorting in ascending order.
 * @list: doubly linked list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node = NULL, *phet = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	node = *list;
	node = node->next;
	while (node)
	{
		while (node->prev && node->n < (node->prev)->n)
		{
			phet = node;
			if (node->next)
				(node->next)->prev = phet->prev;
			(node->prev)->next = phet->next;
			node = node->prev;
			phet->prev = node->prev;
			phet->next = node;
			if (node->prev)
				(node->prev)->next = phet;
			node->prev = phet;
			if (phet->prev == NULL)
				*list = phet;
			print_list(*list);
			node = node->prev;
		}
		node = node->next;
	}
}
