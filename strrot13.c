#include "main.h"
#include <stdlib.h>

/**
 * _strrot13 - rot13'es a string
 * @s: string to be rot13'ed
 * @dest: buffer for storing rot13'ed copy
 * Return: rot13'ed copy string
 */
char *_strrot13(char *dest, char *s)
{
	int i, j;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
				break;
			}
		}
	}
	dest[i] = s[i];
	return (dest);
}
