#include "main.h"

/**
 * rev_str - reverses a string
 * @str: string to be reversed
 * Return: reversed string
 */

char *rev_str(char *str, int num)
{
	char *dest;
	int len, j, i;

	len = _strlen(str);
	dest = malloc(sizeof(char) * len + 2);
	if (dest == NULL)
		return (NULL);
	j = len - 1;
	i = 0;
	if (num < 0)
	{
		dest[i] = '-';
		i++;
	}
	while (j >= 0)
	{
		dest[i] = str[j];
		i++;
		j--;
	}
	dest[i] = '\0';
	return (dest);
}
