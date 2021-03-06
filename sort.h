#ifndef __SORT_H__
#define __SORT_H__
#include <stdlib.h>
#include <stdio.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void insertion_sort_list(listint_t **list);
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
listint_t *create_listint(const int *array, size_t size);
void print_list(const listint_t *list);
void Merge(int *array, int *aux, size_t size);
void merge_sort(int *array, size_t size);
void rem(int *array, int *aux, size_t i, size_t j, size_t c, size_t size);
void selection_sort(int *array, size_t size);
void swap(int *aux, int *array);
void print_sort(int array[], size_t size, int init);
size_t partition(int array[], size_t size);
void quick_sort(int *array, size_t size);

#endif
