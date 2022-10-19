#include <stdio.h>
#include "main.h"
/**
 * main - Entry point, posts _putchar
 * Returns 0 on success
 */

int main(void)

{
	char *sh = "_putchar";
	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}


