#include <stdio.h>

/**
 * main - prints all intergers from 1 - 16
 * Return: Always 0
 */

int main(void)
{
	int num;
	char lc;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	for (lc = 'a'; lc <= 'f'; lc++)
	{
		putchar(lc);
	}

	putchar('\n');

	return (0);
}
