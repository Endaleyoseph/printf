#include "main.h"
#include <stdlib.h>

/**
 * str_str - copies an input sting and returns a string
 * @ap: string tobe copied
 * Return: copied string
 */

char *str_str(va_list ap)
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

	return (_strcpy(dest, s));
}
