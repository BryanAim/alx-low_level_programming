#include "holberton.h"
/**
 * _strcat- Concatenates the content of source with destination.
 *@dest: Destination value.
 *@src: Source value
 * Return: The new destination value.
 */
char *_strcat(char *dest, char *src)
{

	int i, j;

	for (i = 0; dest[i]; i++)
	{
	}
	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
