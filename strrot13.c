#include "main.h"
#include <stdlib.h>

/**
 * _strrot13 - rot13'es a string
 * @str: string to be rot13'ed
 * @dest: buffer for storing rot13'ed copy
 * Return: rot13'ed copy string
 */
char *_strrot13(char *dest, char *str)
{
	int i, j, len;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}
	}
	len = _strlen(str);

	dest = malloc(sizeof(char) * len + 1);

	if (dest == NULL)
		return (NULL);

	return (_strcpy(dest, str));
}
