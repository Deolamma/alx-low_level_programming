#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Function that compares two strings
 * @s1: string to be compared.
 * @s2: String to be compared.
 * Return: s1[i] - s2[i].
 */

int _strcmp(char *s1, char *s2)
{
	int count1 = 0;
	int count2 = 0;
	int i;
	int j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		count1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		count2++;
	}
	if (s1[count1] == s2[count2])
	{
		int i = 0;

		while (s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
			i++;
		}
	}
	return (0);
}
