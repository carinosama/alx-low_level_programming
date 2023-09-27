#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *str;
	int i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	str = malloc(sizeof(int) * s);

	if (str == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		str[i] = min++;

	return (str);
}

