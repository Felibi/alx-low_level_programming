#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest prime factor of 612852475143
 * always 0
 **/

int main(void)
{
	long int i = 2, n = 612852475143;
	long int ans = 0, hiFACT; 
	
	while (n != 0)
	{
		if (n % i != 0)
			i = i + 1;
		
		else
		{
			hiFACT = n;
			n = n / i;
		
			if (n == 1)
			{
				printf("%li\n", n)
				ans = 1;
				break;
			}
		}
	}
	return (0);
}
/**
*	for (i = 3; i < 782849; i = i + 2)
*	{
*		while ((n % i == 0) && (n != i))
*			n = n / i;
*	}
*	printf("%lu\n", n);
*	return (0);
*/
