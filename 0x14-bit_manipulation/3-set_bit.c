/**
* set_bit - sets the value of a bit to 1 at a given index.
*  @index: index of the bit to set, starting from 0
*  Returns: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | 1ul << index;
	return (1);
}
