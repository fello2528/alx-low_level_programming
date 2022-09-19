#include "main.h"

/**
 * _strlen - gets character strings
 *
 * @s: character to get string
 * Return: returns length
 */
int _strlen(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{}
	return (j);
}
