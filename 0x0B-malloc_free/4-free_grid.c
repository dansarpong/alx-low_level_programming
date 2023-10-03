#include <stdlib.h>

/**
  * free_grid - frees a 2 dimensional grid previously allocated
  * @grid: 2 dimensional grid
  * @height: height of grid
  */
void free_grid(int **grid, int height)
{
	for (height--; height >= 0; height--)
		free(grid[height]);
}
