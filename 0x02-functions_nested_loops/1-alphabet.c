#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - entry point
 * Description: Prints the alphabet with _putchar
 * Return: void
 */

void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
	putchar(i);
}
	putchar('\n');
}
