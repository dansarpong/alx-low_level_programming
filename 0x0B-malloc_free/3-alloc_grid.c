#include <stdlib.h>

/**
  * alloc_grid - allocate space for a 2 dimensional array
  * @width: width
  * @height: height
  * Return: pointer to 2 dimensional array, or NULL otherwise
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int) * (width * height));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
