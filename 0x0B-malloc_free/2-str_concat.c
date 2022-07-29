#include "main.h"
#include <stdlib.h>

/**
 *str_concat - a function that concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char *i;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	c = a + b;
	i = malloc(c * sizeof(char) + 1);
	if (i == NULL)
		return (NULL);
	b = 0;
	while (d < c)
	{
		if (d < a)
			i[d] = s1[d];
		if (d >= a)
		{
			i[d] = s2[b];
			b++;
		}
		d++;
	}
	i[d] = '\0';
	return (i);
}
