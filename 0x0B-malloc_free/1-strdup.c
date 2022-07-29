#include "main.h"
#include <stdlib.h>

/**
 *_strdup - contains a copy of the string given as a parameter
 *@str: is the string
 *Return: a pointer
 */

char *_strdup(char *str)
{
	int a = 0;
	int b = 1;
	char *i;

	if (str == NULL)
		return (NULL);
	while (str[b])
	{
		b++;
	}
	i = malloc(b * sizeof(char) + 1);
	if (i == NULL)
		return (NULL);
	while (a < b)
	{
		i[a] = str[a];
		a++;
	}
	i[a] = '\0';
	return (i);
}
