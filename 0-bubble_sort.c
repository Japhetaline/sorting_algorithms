#include "sort.h"

/*
 * bubble_sort - A function used for bubble sorting.
 * @array: The array to sort
 * @size: The length of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t k = 0, m = 0;
	int phet = 0;

	if (array == NULL || size == 0)
		return;
	for (k = 0; k < size - 1; k++)
	{
		for (m = 0; m < size - k - 1; m++)
		{
			if (array[m] > array[m + 1])
			{
				phet = array[m];
					array[m] = array[m + 1];
					array[m + 1] = phet;
					print_array(array, size);
			}
		}
	}
}
