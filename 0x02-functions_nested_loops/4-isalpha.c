#include "main"

/**
 * _isalpha - checks if its lowercase and uppercase
 * @c: character to be checked
 * Return: 1 if charater is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (10);
	else
		return (0);
}
