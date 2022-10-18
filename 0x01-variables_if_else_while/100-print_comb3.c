#include <stdio.h>
/**
 * main - print all possible combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int k, h;

	k = 48;

	while (k < 58)
	{
		h = 48;

		while (h < 58)
		{
			putchar(k);
			putchar(h);
			h++;
			putchar(',');
			putchar(' ');
		}
		k++;
	}
	putchar('\n');
	return (0);
}
/**
 *
 *	for (k = 48; k < 58; k++)
 *	{
 *		for (h = 48; h < 58; h++)
 *		{
 *			if (k == h)
 *			{
 *				continue;
 *			}
 *			putchar(k);
 *			putchar(h);
 *			if (k == 56 && h == 57)
 *			{
 *				break;
 *			}
 *			else
 *			{
 *				putchar(',');
 *				putchar(' ');
 *			}
 *		}
 *	}
 *	putchar('\n');
 *	return (0);
 *}
 */
