#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase.
 * Return: 0 on success
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	putchar(\n);
	return (0);
}
