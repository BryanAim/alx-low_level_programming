#include "holberton.h"
/**
 * _strcmp - Compares the two strings s1 and s2.
 * @s1: First given value.
 * @s2: Second given value.
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{

	int i;

	for (i = 0; s1[i]  && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}
