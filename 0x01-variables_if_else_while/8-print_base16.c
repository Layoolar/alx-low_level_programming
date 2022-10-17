#include <stdio.h>

/**
 * main - Prints the base 16 numbers
 * Return: 0 on success
 */

int main(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
		putchar(num + '0');

	for (alpha = 'a'; alpha < 'g'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
