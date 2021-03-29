#include "holberton.h"

/**
 * str_concat - Concatenates a string to the buffer.
 * @orig: The string to be concatenated.
 * @buffer: The buffer.
 * @buff_len: The length of buffer
 * @buffer_i: The index of the buffer.
 */
void str_concat(char *orig, char *buffer, int *buffer_i,
		unsigned int *buff_len)
{
	int index;

	index = 0;
	while (orig[index] != '\0')
		check_buffer(buffer, buffer_i, buff_len, orig[index++]);
}

/**
 * str_len - Calculates the length of a string.
 * @str: The string to be calculated.
 *
 * Return: The length of the string.
 */
unsigned int str_len(char *str)
{
	unsigned int len;

	len = 0;
	while (str[len++] != '\0')
		;

	return (len);
}

/**
 * str_cpy - Copies a string to another string.
 * @orig: The original string.
 * @dest: The destination string.
 *
 * Return: pointer to destination string
 */
char *str_cpy(char *orig, char *dest)
{
	int index;

	index = 0;
	while (orig[index] != '\0')
	{
		dest[index] = orig[index];
		index++;
	}

	dest[index] = '\0';

	return (dest);
}

/**
 * str_cpy_h - Copies a string to another string, if the string has
 *            non printable characters, then convert them to hex: \xXX.
 * @orig: The original string.
 * @dest: The destination string.
 *
 * Return: pointer to destination string
 */
char *str_cpy_h(char *orig, char *dest)
{
	unsigned int index_o, index_d, index_h;
	char *hex;

	index_o = index_d = index_h = 0;
	hex = NULL;

	while (orig[index_o] != '\0')
	{
		if (orig[index_o] < 32 || orig[index_o] >= 127)
		{
			hex = _uitoa_b_o_h(orig[index_o], 16, 1);
			dest[index_d++] = '\\';
			dest[index_d++] = 'x';
			if (hex[index_h + 1] == '\0')
				dest[index_d++] = '0';
			while (hex[index_h] != '\0')
				dest[index_d++] = hex[index_h++];
			free(hex);
			index_o++;
			index_h = 0;
		}
		else
			dest[index_d++] = orig[index_o++];
	}

	dest[index_d] = '\0';
	return (dest);
}

/**
 * str_cmp - Compares two strings for a number of characters.
 * @str1: The first string.
 * @str2: The second string.
 *
 * Return: 1 if equal, 0 if different.
 */
int str_cmp(const char *str1, char *str2)
{
	short index, len;

	len = index = 0;

	while (str2[len++] != '\0')
		;

	while (index < len - 1)
	{
		if (str1[index] != str2[index])
			return (0);
		index++;
	}
	return (index);
}
