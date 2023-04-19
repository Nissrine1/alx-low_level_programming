#include "function_pointers.h"
#include <stddef.h>

/**
* print_name - prints a name
*
* @f: the functions pointed to
* @name: the name to be printed
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	(*f)(name);
}
