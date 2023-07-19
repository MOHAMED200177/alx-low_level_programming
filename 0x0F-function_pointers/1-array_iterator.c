#include "function_pointers.h"



/**
 * array_iterator - executes a function given as a parameter 
 * on each element of an array.
 * @array: input
 * @size: input
 * @action: input
 *
* Return: always 0 (success)
 */



void array_iterator(int *array, size_t size, void (*action)(int))
{
int *max = array + size - 1;
if (array && size && action)
while (array <= max)
action(*array++);
}
