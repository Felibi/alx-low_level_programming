/**
 * main - displays sizes of various data types.
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	char xter;
	int integer;
	long int longint;
	long long int long2;
	float floating;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(xter));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(integer));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(longint));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(long2));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(floating));

	return (0);
}
