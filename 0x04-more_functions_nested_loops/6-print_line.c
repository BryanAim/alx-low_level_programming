#include "holberton.h"
/**
 * print_line - Print an underscore x times depending on the given number .
 *@n: Given number.
 */
void print_line(int n)
{

	int x = 0;

	if (n > 0)
	{
		while (n > x)
		{
			_putchar('_');
			x++;
		}
	}
	_putchar('\n');
}
