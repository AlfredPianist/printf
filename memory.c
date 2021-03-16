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
	/* if (*buffer_i == 1024) */
	/* { */
	/* 	write(1, buffer, *buffer_i); */
	/* 	*buffer_i = 0; */
	/* }	 */
	buffer[(*buffer_i)++] = c;
	*buff_len += 1;
}

/**
 * _realloc - Reallocates memory depending on its new size.
 * @buffer: The array of memory originally allocated.
 * @old_size: The array's allocated old size.
 * @new_size: The array's new size to be allocated.
 *
 * Return: A pointer to the address if successful at allocating memory.
 *         Otherwise, returns NULL. NULL if new_size == 0.
 */
void *_realloc(void *buffer, unsigned int old_size, unsigned int new_size)
{
	void *b_realloc;
	unsigned int index;

	b_realloc = NULL;
	index = 0;

	if (new_size == old_size)
		return (buffer);

	if (new_size == 0 && buffer != NULL)
	{
		free(buffer);
		return (NULL);
	}

	if (buffer == NULL)
	{
		buffer = malloc(new_size);
		if (buffer == NULL)
			return (NULL);
		return (buffer);
	}

	b_realloc = malloc(new_size);
	if (b_realloc == NULL)
		return (NULL);

	for (index = 0; index < old_size && index < new_size; index++)
		((char *) b_realloc)[index] = ((char *) buffer)[index];
	free(buffer);

	return (b_realloc);
}
