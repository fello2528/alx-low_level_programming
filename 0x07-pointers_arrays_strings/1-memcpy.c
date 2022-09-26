#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: where the function will be copied to memory area
 * @src: character to be copied
 * @n: integer to assign character
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
