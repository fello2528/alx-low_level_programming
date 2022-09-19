#include "main.h"

/**
 * swap_int - exchange the value of the two integers
 *
 * @a: integer value to exchange
 * @b: integer value to swap
 * Return: Always return 0
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;
	*a = j;
	*b = i;
}

