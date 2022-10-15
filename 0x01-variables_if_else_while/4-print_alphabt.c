#include <stdio.h>
/**
 * main - display alphabets in lowercase except q and e.
 *
 * Reurn: 0
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z', && alph != 'q' || alph != 'e')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
