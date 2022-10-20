#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - entry point
 * Description: Prints the alphabet with _putchar
 * Return: void
 */

void print_alphabet_x10(void)
{
char i;
char j;

for (j = 0; j < 10; j++)
{
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	}
}
