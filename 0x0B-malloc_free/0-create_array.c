#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 *
 * @size: size of array
 * @c: array of characters
 *
 * Return: returns 0 if it is null otherwise s
*/

char *create_array(unsigned int size, char c)
{
	char *s = malloc(sizeof(char) * size);
	unsigned int i;

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
	free(s);
}
