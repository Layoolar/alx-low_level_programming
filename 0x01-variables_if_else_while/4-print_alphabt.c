#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase.
 * Return: 0 on success
 */

int main(void)
{
	char lower;

	lower = 'a';
	
	for (char l = 'a'; l <='z'; l++)
	{
	if (l != 'e' && l != 'q')
	{
	putchar(l);
	l++;
	}
	}
	putchar('\n');
	return (0);
}
