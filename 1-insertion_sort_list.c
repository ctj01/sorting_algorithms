#include "sort.h"

/**
 * insertion_sort_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *key, *aux;

	if (!list || !*list)
		return;

	current = *list;
	while ((current = current->next))
	{
		key = current;
		while (key->prev && key->n < key->prev->n)
		{
			aux = key->prev;
			if (key->next)
				key->next->prev = aux;
			if (aux->prev)
				aux->prev->next = key;
			else
				*list = key;
			aux->next = key->next;
			key->prev = aux->prev;
			key->next = aux;
			aux->prev = key;

			print_list(*list);
		}
	}
}
