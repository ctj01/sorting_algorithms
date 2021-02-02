#include "sort.h"

/**
 * bubble_sort - Prints a list of integers
 *
 * @size: The list to be printed
 * @array: The list to be printed
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, x  = 0;
	int k = 0;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0 ; x < size - i - 1; x++)
			{
				if (array[x] > array[x + 1])
				{
					k = array[x];
					array[x] = array[x + 1];
					array[x + 1] = k;
					print_array(array, size);
				}
			}
		}
	}
}
