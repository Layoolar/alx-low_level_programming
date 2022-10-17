#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase.
 * Return: 0 on success
 */

int main(void)
{
	char letter;

	/**
	 * for (letter = 'a'; letter <= 'z'; letter++)
	*/
	letter = 'a';


	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}


	putchar('\n');

	return (0);
}
