#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 - 9
 * do not print 2 and 4
 * Return: no return
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)

	{
		if (ch != 2 && ch != 4)
			_putchar(ch);
	}
	_putchar('\n');
}
