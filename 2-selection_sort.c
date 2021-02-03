#include "sort.h"
/**
 * swap - sort subarray elements
 *
 * @array: The array
 * @aux: index element to sort
 */
void swap(int *aux, int *array)
{
	int temp;

	temp = *aux;
	*aux = *array;
	*array = temp;
}
/**
 * selection_sort - sort subarray elements
 *
 * @array: The array
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, min = 0;

	for (i = 0; i < size - 1; i++)
	{	min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (i != min)
		{
			swap(&array[min], &array[i]);
			print_array(array, size);
		}

	}
}
