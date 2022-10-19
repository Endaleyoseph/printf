#include "main.h"

/**
 * unsigned- converts number to unsigned int 
 * @ap: action parameter
 * Return: the unsigned number
 */
char *_unsigned(va_list ap)
{
	int n, num, len, mul, x;

	num = va_arg(ap, int);
	n = num;
	if (n < 0)
	{
		n *= -1;
	}

	
	len = x = 0;
	mul = 1;
	while (n != 0)
	{
		x += (n % 10) * mul;
		mul *= 10;
		n /= 10;
		len++;
	}
	return (unsigned_str(num, x, mul / 10, len));
}

/**
 * unsigned_str - converts unsigned number to string
 * @num: number to be converted
 * @x: octal number
 * @mul: multiple of 10
 * @len: length of x
 * Return: string or NULL upon failure
 */

char *unsigned_str(int num, int x, int mul, int len)
{
	char *str;
	int i = 0;

	str = malloc(sizeof(char) * len + 2);
	if (str == NULL)
		return (NULL);
	if (num < 0)
	{
		str[i] = '-';
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
