#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes
 * @size: the size of the character
 * @c: the character to initialize the array
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int: a = 0;
	char *i;

	if (size == 0)
		return (NULL);
	i = malloc(size * sizeof(char));
	if (i == NULL)
		return (NULL);
	while (a < size)
	{
		i[a] = c;
		a++;
	}
	return (i);
}
