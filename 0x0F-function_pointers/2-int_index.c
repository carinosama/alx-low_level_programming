#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of array
 * @cmp: pointer
 * Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (c = 0; c < size; c++)
	{
		if (cmp(array[c]))
			return (c);
	}
	return (-1);
}

