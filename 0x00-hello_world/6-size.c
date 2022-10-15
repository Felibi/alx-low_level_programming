/**
 * main - displays sizes of various data types.
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	int integer;
	float floating;
	long int longint;
	long long int long2;
	char xter;

	printf("Size of int: %lu bytes\n", (unsigned long)sizeof(integer));
	printf("Size of float: %lu bytes\n", (unsigned long)sizeof(floating));
	printf("Size of long int: %lu bytes\n", (unsigned long)sizeof(longint));
	printf("Size of long long int: %lu bytes\n", (unsigned long)sizeof(long2));
	printf("Size of char: %lu byte\n", (unsigned long)sizeof(xter));

	return (0);
}
