#include "sort.h"

/**
 * partition - function that partitions an array. 
 * @array: parameter
 * @size: parameter
 * @beg: parameter
 * @end: parameter
 * Return: partion index.
 */

int partition(int *array, int beg, int end, int size)
{
	int pivot = array[end];
	int par_ind = beg;
	int a, tmp;

	for (a = beg; a < end; a++)
	{
		if (array[a] <= pivot)
		{
			if (par_ind != a)
			{
				tmp = array[par_ind];
				array[par_ind] = array[a];
				array[a] = tmp;
				print_array(array, size);
			}
			par_ind++;
		}
	}
	if (par_ind != end)
	{
		tmp = array[par_ind];
		array[par_ind] = array[end];
		array[end] = tmp;
		print_array(array, size);
	}
	return (par_ind);
}

/**
 * quickSort - function that sorts an array of integers using recursion
 * @array: parameter
 * @size: parameter
 * @beg: parameter
 * @end: parameter
 * Return: 0 on success
 */

void quickSort(int *array, int beg, int end, int size)
{
	int par_ind;

	if (beg < end)
	{
		par_ind = partition(array, beg, end, size);
		quickSort(array, beg, par_ind - 1, size);
		quickSort(array, par_ind + 1, end, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: parameter
 * @size: parameter
 * Return: 0 on success
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quickSort(array, 0, size - 1, size);
}
