#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0) {
return NULL;
}

grid = malloc(sizeof(int*) * height);
if (grid == NULL) {
return NULL;
}

for (i = 0; i < height; i++) {
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL) {
/* Free previously allocated memory */
for (j = 0; j < i; j++) {
free(grid[j]);
}
free(grid);
return NULL;
}
/* Initialize values to 0 */
for (j = 0; j < width; j++) {
grid[i][j] = 0;
}
}

return grid;
}
