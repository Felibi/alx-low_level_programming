#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: xter variable.
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
