#include <stdio.h>
/**
 * main - display alphabets excluding q and e.
 *
 * Return: 0
 */
int main(void)
{
	char alph = 'a';

	while ((alph <= 'z'); alph != 'q' && alph != 'e')
	{

		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}

