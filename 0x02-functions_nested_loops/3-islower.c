#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase letters
 * Return: 0 or 1
 * @i: input character
 */

int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
		return (1);
	else
		return (0);
}
