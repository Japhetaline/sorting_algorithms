#include "sort.h"

/**
 * quick_sort - Function that sorts an array of integers
 * in ascending order
 * @array:array to be sorted
 * @size: array size
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return;
	quick_s(array, 0, size - 1, size);
}

/**
 * partition - partition
 * @array: array
 * @lo : lower
 * @hi: higher
 * @size: array size
 * Return: i
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int k = lo - 1, m = lo;
	int pivot = array[hi], phet = 0;

	for (m = 0; m < hi; m++)
	{
		if (array[m] < pivot)
		{
			k++;
			if (array[k] != array[m])
			{
				phet = array[k];
				array[k] = array[m];
				array[m] = phet;
				print_array(array, size);
			}
		}
	}
	if (array[k + 1] != array[hi])
	{
		phet = array[k + 1];
		array[k + 1] = array[hi];
		array[hi] = phet;
		print_array(array, size);
	}
	return (k + 1);
}

/**
 * quick_s - quick sort
 * @array: given array
 * @lo: lower
 * @hi: higher
 * @size: array size
 * Return void
 */
void quick_s(int *array, int lo, int hi, size_t size)
{
	int pivot;

	if (lo < hi)
	{
		pivot = partition(array, lo, hi, size);
		quick_s(array, lo, pivot - 1, size);
		quick_s(array, pivot + 1, hi, size);
	}
}
