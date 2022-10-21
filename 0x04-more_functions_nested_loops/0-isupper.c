#include "main.h"

/**
 * _isupper -> checks if character is uppercase
 *@c: an integer parametre
 *
 * Return: 1 if upppercase or 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
