#include "main.h"

/**
 * dec_octal - converts decimal to octal
 * @ap: action parameter
 * Return: octal number string
 */

char *dec_octal(va_list ap)
{
	int x, mul, n, num, len;

	x = len = 0;
	mul = 1;
	num = va_arg(ap, int);
	n = num;

	if (n < 0)
	{
		n *= -1;
	}
	while (n > 0)
	{
		x += (n % 8) * mul;
		mul *= 10;
		n /= 8;
		len++;
	}

	return (oct_str(num, x, mul / 10, len));
}

/**
 * oct_str - converts octal to string
 * @num: number to be converted
 * @x: octal number
 * @mul: multiple of 10
 * @len: length of x
 * Return: string or NULL upon failure
 */

char *oct_str(int num, int x, int mul, int len)
{
	char *str;
	int i = 0;

	str = malloc(sizeof(char) * len + 2);
	if (str == NULL)
		return (NULL);
	if (num < 0)
	{
		str[i] = '1';
		i++;
	}
	while (x > 0)
	{
		str[i] = ((x / mul) + '0');
		x = x % mul;
		mul /= 10;
		i++;
	}
	str[i] = '\0';

	return (str);
}
