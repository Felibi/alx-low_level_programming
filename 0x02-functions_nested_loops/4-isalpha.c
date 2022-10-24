#include "main.h"

/**
 * _isalpha(int c)
 * @c: char to check
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' || 'A') && c <= 'z' || 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
