#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase.
 * Return: 0 on success
 */

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
	if (lower != 'q' && lower != 'e')
	{
		putchar(lower);
		lower++;
	}
	}
	putchar('\n');
	return (0);
}