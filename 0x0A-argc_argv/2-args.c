#include <stdio.h>

/**
 * main - entry point
 * @argc: number of paramethers
 * @argv: string of parameters
 * Return 0
 */

int main(int argc, char *argv[])
{
	int a = 0;

	while (a < argc)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
