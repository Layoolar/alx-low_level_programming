#include <stdio.h>

/**
 * main main
 * main - entry point
 * return 0
 */
int main(void)
{
	int a;
	double b;
	char d;
	float c;
	long int e;
	long long int f;


	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(f));

	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(c));
	return (0);
}
