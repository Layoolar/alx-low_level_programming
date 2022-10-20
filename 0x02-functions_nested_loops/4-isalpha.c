#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for alphabets
 * Return: 0 or 1
 * @c: input character
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
