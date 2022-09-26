#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: character to be located
 * @c: string to be located
 * Return: on success return character or Null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
