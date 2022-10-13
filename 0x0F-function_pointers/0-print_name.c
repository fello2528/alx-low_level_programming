#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - name to print
 *
 * @name: string of name
 * @f: function to use
 * return: always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
	f(name);
	}
}
