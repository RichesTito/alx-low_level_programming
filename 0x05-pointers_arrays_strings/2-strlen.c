#include "main.h"

/**
 * _strlen-Find the length of a string whose length is to be found
 * @s: string parameter input
 * Return: returns the length of the string.
 */

int_strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
