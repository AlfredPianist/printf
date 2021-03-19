#include "holberton.h"

/**
 * f_strh - The "%S" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void f_strh(va_list arg_l,
	    unsigned int *buffer_i, unsigned int *buff_len,
	    char *buffer)
{
	char *str, *strh;
	unsigned int index, len;

	str = strh = NULL;
	index = len = 0;

	str = va_arg(arg_l, char *);
	if (str == NULL)
		str = "(null)";

	while (str[index] != '\0')
	{
		if (str[index] < 32 || str[index] >= 127)
			len += 4;
		else
			len++;
		index++;
	}

	strh = _alloc(strh, sizeof(*strh) * len);
	strh = str_cpy_h(str, strh);

	str_concat(strh, buffer, buffer_i, buff_len);
	free(strh);
}

/**
 * f_rev - The "%r" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void f_rev(va_list arg_l,
	   unsigned int *buffer_i, unsigned int *buff_len,
	   char *buffer)
{
	unsigned int index;
	char *str, *rev;

	rev = str = NULL;
	index = 0;

	str = va_arg(arg_l, char *);

	while (str[index] != '\0')
		index++;

	rev = _alloc(rev, sizeof(*rev) * index + 1);
	rev = str_cpy(str, rev);
	rev_string(rev);

	str_concat(rev, buffer, buffer_i, buff_len);
	free(rev);
}

/**
 * f_rot - The "%R" format specifier.
 * @arg_l: The argument list to be operated.
 * @buffer_i: The address of the current position of the
 *             buffer to be printed.
 * @buff_len: The total length of the string to be printed.
 * @buffer: The pointer to the buffer to be printed.
 */
void f_rot(va_list arg_l,
	   unsigned int *buffer_i, unsigned int *buff_len,
	   char *buffer)
{
	unsigned int index;
	char *str, *rot;

	rot = str = NULL;
	index = 0;

	str = va_arg(arg_l, char *);

	while (str[index] != '\0')
		index++;

	rot = _alloc(rot, sizeof(*rot) * index + 1);
	rot = str_cpy(str, rot);
	rot13(rot);

	str_concat(rot, buffer, buffer_i, buff_len);
	free(rot);
}
