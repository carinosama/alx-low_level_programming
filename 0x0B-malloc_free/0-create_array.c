#include "main.h"

/**
 * create_array - create array of size size and assign char c
 * @size: array
 * @c: char
 * Description: create array of size size and assign char c
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *str = malloc(size);

	if (size == 0 || str == 0)
		return (0);

	while (size--)
		str[size] = c;
	return (str);
}

