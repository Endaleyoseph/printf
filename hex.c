#include "main.h"

/**
 * int_hex - converts integer to hexa-decimal
 * @ap: action parameter
 * Return: hexa-decimal string or NULL upon failure
 */

char *int_hex(va_list ap)
{
	char *str;
	char s[16] = "0123456789abcdef";
	int len, num, i, x;

	num = va_arg(ap, int);
	x = num;

	for (len = 0; x != 0; len++)
	{
		x /= 16;
	}
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	i = 0;
	do {
		str[i++] = s[num % 16];
		num /= 16;
	} while (num != 0);
	str[i] = '\0';
	return (rev_str(str, num));
}
