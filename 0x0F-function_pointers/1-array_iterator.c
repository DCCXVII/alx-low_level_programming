#include "function_pointers.h"

/**
 * array_iterator
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to be executed
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
