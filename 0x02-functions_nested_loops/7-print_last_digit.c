#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int lc = n % 10;

	if (lc < 0)
		lc *= -1;

	_putchar(lc + '0');

	return (0);
}
