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
 * _realloc - reallocates memory depending on its new size.
 * @ptr: The array of memory originally allocated.
 * @old_size: The array's allocated old size.
 * @new_size: The array's new size to be allocated.
 *
 * Return: A pointer to the address if successful at allocating memory.
 *         Otherwise, returns NULL. NULL if new_size == 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p_realloc;
	unsigned int counter;

	p_realloc = NULL;
	counter = 0;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	p_realloc = malloc(new_size + 1);
	if (p_realloc == NULL)
		return (NULL);

	for (counter = 0; counter < old_size && counter < new_size; counter++)
		((char *) p_realloc)[counter] = ((char *) ptr)[counter];
	((char *) p_realloc)[counter] = '\0';
	free(ptr);

	return (p_realloc);
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
void check_buffer(char *buffer, int *buffer_i, unsigned int *buff_len, char c)
{
	if (*buffer_i == 1024)
	{
		write(1, buffer, *buffer_i);
		*buffer_i = 0;
	}
	buffer[(*buffer_i)++] = c;
	*buff_len += 1;
}
