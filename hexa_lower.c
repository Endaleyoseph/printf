#include "main.h"

/**
 * _hexa- converts number to hexadecimal
 * @ap: action parameter
 * Return: the hexadecimal
 */
char *_hexa_lower(va_list ap)
{
	int n, i = 0, len = 0;
	char s[16] = "0123456789abcdef";
	char *ns;
	char *dest;

	n = va_arg(ap, int);
	if (n < 0)
	{
		exit(98);
	}
	ns = malloc(sizeof(char) * 100);
	if (ns == NULL)
		return (NULL);
	while (n != 0)
	{
		ns[i++] = (s[n % 16]);
		n /= 16;
		len++;
	}
	dest = malloc(sizeof(char) * len + 1);

	if (dest == NULL)
		return (NULL);
	return (_strrev(dest, ns));
}
