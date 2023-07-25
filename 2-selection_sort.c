#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: parameter
 * @size: parameter
 */

void selection_sort(int *array, size_t size)
{
	size_t a, b, j_min;
	int tmp;

	if (size < 2)
		return;
	for (a = 0; a < size; a++)
	{
		j_min = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[j_min])
				j_min = b;
		}
		if (j_min != a)
		{
			temp = array[a];
			array[a] = array[j_min];
			array[j_min] = tmp;
			print_array(array, size);
		}
	}
}
