#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to check
 * Return: int length of the string
 */

int_strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}
