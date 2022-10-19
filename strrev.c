#include "main.h"
#include <string.h>

/**
 * _strrev - reverses a string
 *@s: string to be reversed
 *@dest: buffer for storing reversed copy
 *Return: reversed copy string
 */

char *_strrev(char *dest, char *s)
{
	char c;
	int i, len;

	len = strlen(s);
	for (i = 0; i <= len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = c;
	}
	dest[i] = s[i];
	return (dest);
}
