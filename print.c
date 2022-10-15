#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * check_buffer_len - checks buffer length
 * @len: length of the buffer
 * Return: the length of the buffer
 */

int check_buffer_len(int len)
{
	if (len > 1020)
		len = 0;
	return (len);
}
