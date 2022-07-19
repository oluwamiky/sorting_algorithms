#include "sort.h"

/**
 * int_swapper - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void int_swapper(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubba = false;

	if (array == NULL || size < 2)
		return;

	while (bubba == false)
	{
		bubba = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				int_swapper(array + i, array + i + 1);
				print_array(array, size);
				bubba = false;
			}
		}
		len--;
	}
}
