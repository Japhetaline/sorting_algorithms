#include "sort.h"

/**
 * selection_sort - This function is used for selection sorting
 * @array: The array of te algorithm
 * @size: size of the array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	int phet = 0;
	size_t k = 0, m = 0, jnr = 0;

	if (array == NULL || size == 0)
		return;

	for (k = 0; k < size - 1; k++)
	{
		jnr = k;
		for (m = k + 1; m < size; m++)
		{
			if (array[m] < array[jnr])
				jnr = m;
		}
		if (jnr != k)
		{
			phet = array[k];
			array[k] = array[jnr];
			array[jnr] = phet;
			print_array(array, size);
		}
	}
}
