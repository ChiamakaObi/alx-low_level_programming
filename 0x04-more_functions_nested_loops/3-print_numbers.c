#include "main.h"

/**
 * print_numbers - will print the numbers from 0-9
 *
 * Return: always 0
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
