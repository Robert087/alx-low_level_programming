#include "main.h"

/**
 * _strlen - return the legnth of a string
 *
 * @s: string parameter input
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
