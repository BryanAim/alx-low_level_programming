#include "holberton.h"
/**
 * string_toupper - Turns lowercase to uppercase of a given string.
 * @str: Given string.
 * Return: char.
 */
char *string_toupper(char *str)
{

	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);

}
