#include <stdio.h>

/**
 * main - prints all the alphabets in lowercase except q and e
 * followed by a new line
 * Return: Always 0
 */

int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'q' && la != 'e')
			putchar(la);

	}

	putchar('\n');

	return (0);
}

