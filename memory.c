#include "holberton.h"

/**
 * _alloc - Allocates memory for the buffer to be printed.
 * @buffer: The pointer to the buffer to be printed.
 * @size: The size of the buffer to be allocated.
 *
 * Return: The pointer to the buffer allocated
 *         or NULL if failed to allocate memory.
 */
void *_alloc(void *buffer, unsigned int size)
{
	buffer = NULL;
	buffer = malloc(size);
	if (buffer == NULL)
		return (NULL);
	return (buffer);
}

/**
 * check_buffer - Checks the size of the buffer (buffer length).
 * @buffer: The pointer to the buffer.
 * @buffer_i: The current length of the buffer.
 * @buff_len: The total length of the string to be printed.
 * @c: The character to be added to the buffer.
 *
 * Description: Checks the current size of the buffer. If the buffer reaches
 *              a certain treshold (BUFFER size), then it will prints its
 *              contents and return to the first character.
 * Return: The pointer to the buffer.
 */
void check_buffer(char *buffer,
		  unsigned int *buffer_i, unsigned int *buff_len,
		  char c)
{
	if (*buffer_i == 1024)
	{
		print_buffer(buffer, buff_len);
		*buffer_i = 0;
	}

	buffer[(*buffer_i)++] = c;
	*buff_len += 1;
}


int print_buffer(char *buffer, unsigned int *buff_len)
{
	int w_code;

	w_code = write(1, buffer, *buff_len);
	return (w_code);
}
