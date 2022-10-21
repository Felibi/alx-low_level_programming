#include "main.h"

/**
 * _isupper - check if char is uppercase
 * @c: character parameter
 *
 * Return: 0 otherwise, 1 if upper
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
