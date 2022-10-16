#include "main.h"
#include <stdlib.h>

/**
 * _strcpy - copies a string
 * @str: string to be copied
 * @dest: buffer for storing copy
 * Return: copied string
 */

char *_strcpy(char *dest, char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = str[i];

	return (dest);
}
