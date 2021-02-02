#include "sort.h"
/**
 * rem - remaining_elements of both sides
 *
 * @array: The array
 * @size: Number of elements in @array
 * @i: left index
 * @j: right index
 * @current: current position subarrays
 * @aux: temp array to store sorted elements
 */
void rem(int *array, int *aux, size_t i, size_t j, size_t current, size_t size)
{
	size_t middle = size / 2;

	while (i < middle)
	{
		aux[current] = array[i];
		current++;
		i++;
	}
	while (j < size - middle)
	{
		aux[current] = (array + middle)[j];
		current++;
		j++;
	}
	current = 0;
	while (current < size)
	{
		array[current] = aux[current];
		current++;
	}
	printf("[Done]: ");
	print_array(array, size);
}
/**
 * merge_sort - sort subarray elements
 *
 * @array: The array
 * @size: Number of elements in @array
 */
void merge_sort(int *array, size_t size)
{
	int *aux;

	if (!array || size < 2)
		return;

	aux = malloc(sizeof(*aux) * size);
	if (!aux)
		return;

	Merge(array, aux, size);
	free(aux);
}

/**
 * Merge - Prints an array of integers
 *
 * @array: The array
 * @aux: temp array to store sorted elements
 * @size: Number of elements in @array
 */
void Merge(int *array, int *aux, size_t size)
{
	size_t middle = size / 2;
	size_t i = 0, j = 0, sentinel = 0;

	if (size < 2)
		return;
	Merge(array, aux, middle);
	Merge(array + middle, aux + middle, size - middle);
	printf("Merging...\n");
	printf("[left]: ");
	print_array(array, middle);
	printf("[right]: ");
	print_array(array + middle, size - middle);
	while (i < middle && j < size - middle)
	{
		if (array[i] < (array + middle)[j])
		{
			aux[sentinel] = array[i];
			i++;
		}
		else
		{
			aux[sentinel] = (array + middle)[j];
			j++;
		}
		sentinel++;
	}
	rem(array, aux, i, j, sentinel, size);
}
