#include "main.h"
#include <stdlib.h>
/**
 * str_concat - conaatenantes two char array
 *
 * @s1: first char array
 * @s2: second char array
 *
 * Return: Returns a pointer to a new char array
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int a;
	int b;
	int ss1 = 0;
	int ss2 = 0;
	char *myarr;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		ss1++;
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		ss2++;
	}
	myarr = (char *) malloc(ss1 + ss2 + 1);
	if (myarr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		myarr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		myarr[i] = s2[j];
	}
	myarr[i] = '\0';
	return (myarr);
}

