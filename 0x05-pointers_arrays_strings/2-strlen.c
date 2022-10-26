#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: xter variable.
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int k = 0;

	for (; *s++;)
	{
		k++;
	}
	return (k);
}
