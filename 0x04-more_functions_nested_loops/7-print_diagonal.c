#include "holberton.h"
/**
 * print_diagonal - Print space \ by the given number.
 *@n: Given number.
 */
void print_diagonal(int n)
{

	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
}
