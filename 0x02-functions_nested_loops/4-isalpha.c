#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * Description: returns 1 if c is a letter, lowercase or uppercase,
 * returns 0 otherwise
 * @c: c is an ascii character
 * Return: 1 if letter. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
