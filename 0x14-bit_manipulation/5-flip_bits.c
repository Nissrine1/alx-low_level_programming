#include "main.h"

/**
* flip_bits - flips a number to get another one
*
* @n: the number to be fliped
* @m: the resulted number
* Return: returns the number of bits you would need to flip.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
