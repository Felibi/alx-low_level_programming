#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long int div = 2, n = 612852475143;
	long int ans = 0, maxFACT;

	while (n != 0)
	{
		if (n % i != 0)
			div = div + 1;
		else
		{
			maxFACT = n;
			n = n / div;

			if (n == 1)
			{
				printf("%d\n", n)
				ans = 1;
				break;
			}
		}
	}
	return (0);
}
