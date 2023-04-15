#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: First char array
 * @s2: Second char array
 * @n: number of bytes to be copied from s2
 * Return: returns a pointer to char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *myarr;
	int i;
	unsigned int j;
	unsigned int s1len = 0;
	unsigned int s2len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	myarr = malloc((s1len + n + 1) * sizeof(char));
	if (myarr == NULL)
		return (NULL);
	/* reallocate mem. if n is greater than length of s2 */
	if (n >= s2len)
	{
		myarr = realloc(myarr, (s1len + s2len + 1) * sizeof(char));
		if (myarr == NULL)
			return (NULL);
		for (i = 0; s1[i] != '\0'; i++)
			myarr[i] = s1[i];
		for (j = 0; s2[j] != '\0'; i++, j++)
			myarr[i] = s2[j];
	} else
	{
		for (i = 0; s1[i] != '\0'; i++)
			myarr[i] = s1[i];
		for (j = 0; j < n; i++, j++)
			myarr[i] = s2[j];
	}
	/* add EOF to our newly created char arr */
	myarr[i] = '\0';
	return (myarr);
	return (0);
}
