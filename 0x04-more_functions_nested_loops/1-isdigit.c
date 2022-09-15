#include "main.h"

/**
 * _isdigit - checks for a digit 0 - 9
 * @c: integer
 * Return: return 1 if c is a digit and return 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
		return (0);
}
