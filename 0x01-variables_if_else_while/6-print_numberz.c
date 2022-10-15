#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase.
 * Return: 0 on success
 */

int main(void)
{
	int i = '0';

	while(i < '10')
	{
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
