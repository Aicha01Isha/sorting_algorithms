#include "sort.h"

/**
 * shell_sort - function that sorts an array of integers in ascending
 * @array: parameter
 * @size: parameter
 * Return: 0 on success
 */

void shell_sort(int *array, size_t size)
{
	size_t in, out;
	int tmp_val;
	size_t gap = 1;
	size_t a = 0;

	if (array == NULL || size < 2)
		return;
	while (gap < size / 3)
		gap = gap * 3 + 1;
	while (gap > 0)
	{
		for (out = gap; out < size; out++)
		{
			tmp_val = array[out];
			in = out;
			while (in > gap - 1 && array[in - gap] >= tmp_val)
			{
				array[in] = array[in - gap];
				in -= gap;
			}
			array[in] = tmp_val;
		}
		print_array(array, size);
		gap = (gap - 1) / 3;
		a++;
	}
}
