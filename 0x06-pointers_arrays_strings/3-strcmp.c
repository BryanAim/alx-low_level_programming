#include "holberton.h"
/**
 * _strncpy - copies the string pointed to by src to dest.
 * @dest: Destination value.
 * @src: Source value.
 * @n: at most n bytes of src are copied.
 * Return: char.
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
