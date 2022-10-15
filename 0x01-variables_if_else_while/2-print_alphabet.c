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
		putchar(lower\n);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper\n);
		upper++;
	}
	return (0);
}
