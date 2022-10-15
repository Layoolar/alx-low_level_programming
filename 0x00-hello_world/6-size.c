#include <stdio.h>

/**
 * main entry point
 * return 0
 */
int main (void)
{
	int a;
	double b;
	char d;
	float c;
	printf("Size of an integer: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a double: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(c));
	return (0);
}
