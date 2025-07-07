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

	ptr = malloc(sizeof(int) * width);

	for (i = 0; i < width; i++)
	{
		*ptr[i] = malloc(sizeof(int) * height);
		for (j = 0; j <height; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}

void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}