#include <stdlib.h>
#include "main.h"
/**
 * free_grid - returns a pointer to 2d array
 * @grid: 2d
 * @height: int
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL) {
return;
}
for (i = 0; i < height; i++)
{
if (grid[i] != NULL) {
free(grid[i]);
 grid[i] = NULL;
}
}
free(grid);
}
