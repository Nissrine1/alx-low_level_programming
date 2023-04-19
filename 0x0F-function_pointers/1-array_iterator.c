#include "function_pointers.h"

/**
* array_iterator - iterates through an array
*
* @array: the array provided
* @size: the size of the array
* @action: pointer to a function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL || size <= 0)
	{
		return;
	}

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
