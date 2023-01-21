#include "sort.h"

/**
 * bubble_sort - sorts an array in
 * ascending order
 * @array: array to sort
 * @size: size of array
 *
 *  Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size - 1;
	int temp = 0, sorted = 0;

	if (size < 2)
	{
		return;
	}
	else
	{
		while (!(sorted))
		{
			sorted = 1;

			for (i = 0; i < len ; i++)
			{
				if (array[i] > array[i + 1])
				{
					temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					sorted = 0;
					print_array(array, size);
				}
				temp = 0;
			}
			len--;
		}
	}
}
