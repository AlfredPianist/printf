#include "holberton.h"

/**
 * str_concat - Concatenates a string to the buffer.
 * @orig: The string to be concatenated.
 * @buffer: The buffer.
 * @buffer_i: The index of the buffer.
 */
void str_concat(char *orig, char *buffer, unsigned int *buffer_i)
{
	int index;

	index = 0;
	while (orig[index] != '\0')
	{
		buffer[(*buffer_i)++] = orig[index++];
		buffer = check_buffer(buffer, buffer_i);
	}
	free(orig);
}

/**
 * str_cpy - Copies a string to another string.
 * @orig: The original string.
 * @dest: The destination string.
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