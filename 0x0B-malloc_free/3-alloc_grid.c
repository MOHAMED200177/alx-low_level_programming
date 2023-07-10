#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -   concatenates two strings.
 *@s1: input
 *@s2: input
 * Return: Always 0.
 */

int **alloc_grid(int width, int height)
{
int **grid = NULL;
int i = 0;
int j = 0;

if (width <= 0 || height <= 0)
{
return (NULL);
}

grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}

