#include "holberton.h"
/**
 * rot13 - Rotate by 13 places.
 * @s: Given string.
 * Return: char.
 */
char *rot13(char *s)
{

	int i, j;

	char s1[] = "abcdefghijklmnopqrstuvwxyzEBGROT";
	char s2[] = "nopqrstuvwxyzabcdefghijklmROTEBG";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; s1[j]; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
				break;
			}
		}
	}
	return (s);
}
