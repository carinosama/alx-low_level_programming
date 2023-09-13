#include "function_pointers.h"

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int j = 0;

	if (array && size && cmp)
		while (j < size)
		{
			if (cmp(array[j]))
				return (j);
			j++;
		}
	return (-1);
}

