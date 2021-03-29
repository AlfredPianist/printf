#include "holberton.h"

/**
 * f_add - The "%p" format specifier.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The formatted "%p" string.
 */
char *f_add(va_list arg_l, unsigned int precision)
{
	void *add;
	char *add_s, *buf;
	unsigned long int add_u;

	precision = precision;
	buf = NULL;
	add = va_arg(arg_l, void *);

	if (add == NULL)
	{
		buf = _alloc(buf, str_len("(nil)") * sizeof(*buf));
		buf = str_cpy("(nil)", buf);
	}
	else
	{
		add_u = (unsigned long int) add;
		add_s = _uitoa_b_o_h(add_u, 16, 0);

		buf = _alloc(buf, (str_len(add_s) + 2) * sizeof(*buf));
		buf[0] = '0', buf[1] = 'x';
		buf = buf + 2, buf = str_cpy(add_s, buf), buf = buf - 2;
		free(add_s);
	}

	return (buf);
}


/**
 * f_strh - The "%S" custom format specifier.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The formatted "%S" string.
 */
char *f_strh(va_list arg_l, unsigned int precision)
{
	char *str, *strh;
	unsigned int index, len;

	precision = precision;
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

	return (strh);
}

/**
 * f_rev - The "%r" custom format specifier.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The formatted "%r" string.
 */
char *f_rev(va_list arg_l, unsigned int precision)
{
	unsigned int index;
	char *str, *rev;

	precision = precision;
	rev = str = NULL;
	index = 0;

	str = va_arg(arg_l, char *);

	while (str[index] != '\0')
		index++;

	rev = _alloc(rev, sizeof(*rev) * index + 1);
	rev = str_cpy(str, rev);
	rev_string(rev);

	return (rev);
}

/**
 * f_rot - The "%R" custom format specifier.
 * @arg_l: The argument list to be operated.
 * @precision: The precision amount.
 *
 * Return: The formatted "%R" string.
 */
char *f_rot(va_list arg_l, unsigned int precision)
{
	unsigned int index;
	char *str, *rot;

	precision = precision;
	rot = str = NULL;
	index = 0;

	str = va_arg(arg_l, char *);

	while (str[index] != '\0')
		index++;

	rot = _alloc(rot, sizeof(*rot) * index + 1);
	rot = str_cpy(str, rot);
	rot13(rot);

	return (rot);
}
