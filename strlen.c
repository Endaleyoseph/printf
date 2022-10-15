#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of the string
 * @s: the string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
