#include "sort.h"

/**
 * selection_sort - sorts an array using
 * selection sort method
 * @array: array to be sorted
 * @size: size of array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t lowestValueIndex = 0, temp = 0;
	size_t i, j;

	if (size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		lowestValueIndex = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[lowestValueIndex])
			{
				lowestValueIndex = j;
			}
		}

		if (lowestValueIndex != i)
		{
			temp = array[i];
			array[i] = array[lowestValueIndex];
			array[lowestValueIndex] = temp;
			print_array(array, size);
		}
	}
}
