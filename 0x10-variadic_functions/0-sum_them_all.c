#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - make addition of all the arguments
*
* @n: the number of arguments to be added
* Return: returns the sum else 0
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
