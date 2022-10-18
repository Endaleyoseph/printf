#include "main.h"
#include <stdlib.h>

/**
 * str_rev - reverses an input sting and returns a string
 * @ap: string tobe copied
 * Return: reversed string
 */

char *str_rev(va_list ap)
{
	char *dest;
	char *s;
	int len;

	s = va_arg(ap, char *);
	if (s == NULL)
		s = "(null)";

	len = _strlen(s);

	dest = malloc(sizeof(char) * len + 1);

	if (dest == NULL)
		return (NULL);

	return (_strrev(dest, s));
}
