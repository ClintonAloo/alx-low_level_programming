#include "main.h'

/**
 * _strncmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) != '\0' && *(S2 + I) != '\0')
	{
		if (S1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

