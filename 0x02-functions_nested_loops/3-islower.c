#include "main.h"
/**
 * _islower - checks for lowercase character
 * Description: if c is lowercase returns 0, otherwise returns 1
 * @c: c is an ascii character
 * Return: 1 for lowercase. 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
