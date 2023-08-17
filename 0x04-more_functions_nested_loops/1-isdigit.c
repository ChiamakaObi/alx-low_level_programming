#include "main.h"

/**
 *_isdigit- checks for uppercase letter
 *
 * @c: a character input
 *
 * Return: 1 if c is uppercase 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
