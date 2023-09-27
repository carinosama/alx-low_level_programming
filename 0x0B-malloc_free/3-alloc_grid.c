#include "main.h"

/**
 * alloc_grid - nested loop to make grid
 * @width: width
 * @height: height
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **rin;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	rin = malloc(sizeof(int *) * height);

	if (rin == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		rin[x] = malloc(sizeof(int) * width);

		if (rin[x] == NULL)
		{
			for (; x >= 0; x--)
				free(rin[x]);

			free(rin);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			rin[x][y] = 0;
	}

	return (rin);
}

