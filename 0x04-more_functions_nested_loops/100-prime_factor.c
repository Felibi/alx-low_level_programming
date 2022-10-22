#include <stdio.h>

/**
 * main - prints out the highest prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long int n, d, i;

	n = 612852475143;
	d = -1;

	while (n % 2 == 0)
	{
		d = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			d = i;
			n = n / i;
		}
	}

	if (n > 2)
		d = n;

	printf("%ld\n", d);

	return (0);
}
