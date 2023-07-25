#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: parameter
 * @size: parameter
 */

void bubble_sort(int *array, size_t size)
{
	size_t a;
	int tmp;
	int swps = -1;

	if (size < 2)
		return;
	while (swps)
	{
		swps = 0;
		for (a = 0; a < size - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				tmp = array[a];
				array[a] = array[a + 1];
				array[a + 1] = tmp;
				swps++;
				print_array(array, size);
			}
		}
	}
}
