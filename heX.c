#include "main.h"

/**
 * int_heX - converts integer to hexa-decimal
 * @ap: action parameter
 * Return: hexa-decimal string or NULL upon failure
 */

char *int_heX(va_list ap)
{
	char *ptr;
	char s[16] = "0123456789ABCDEF";
	int len, num, i, x;

	num = va_arg(ap, int);
	x = num;

	for (len = 0; x != 0; len++)
	{
		x /= 16;
	}
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	do {
		ptr[i++] = s[num % 16];
		num /= 16;
	} while (num != 0);
	ptr[i] = '\0';
	return (rev_str(ptr, num));
}
