#include "main.h"

/**
* clear_bit - clears a bit at given index
*
* @n: a pointer to the number
* @index: the given index
* Return: returns 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
	return (-1);
	}
	mask = 1UL << index;
	*n &= ~mask;
	return (1);
}
