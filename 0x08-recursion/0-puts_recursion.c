#include <stdio.h>
#include "main.h"

/**
 *  _puts_recursion - prints a string, followed by a new line
 *  @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puthar(s[0]);
	s++;
	_puts_recursion[s];
}
