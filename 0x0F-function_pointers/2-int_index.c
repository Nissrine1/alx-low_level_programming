#include "function_pointers.h"

/**
* int_index - searches for an integer
*
* @array: array to be searched in
* @size: the size of the array
* @cmp: a pointer to function
*
* Return: returns the first index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
