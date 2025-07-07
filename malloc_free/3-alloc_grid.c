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

	ptr = malloc(sizeof(*ptr) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
		for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);	
		}
		for (j = 0; j <width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
