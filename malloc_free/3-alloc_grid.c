#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: width
 * @length: length
 *
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width == 0 || height == 0)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * width);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		ptr[i] = malloc(sizeof(int) * height);
		if (ptr[i] == NULL)
			return (NULL);
		for (j = 0; j <height; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
