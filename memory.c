#include "holberton.h"

/**
 * _alloc - Allocates memory for the buffer to be printed.
 * @buffer: The pointer to the buffer to be printed.
 *
 * Return: The pointer to the buffer allocated
 *         or NULL if failed to allocate memory.
 */
void *_alloc(void *buffer)
{
	buffer = NULL;
	buffer = malloc(BUFFER);
	if (buffer == NULL)
		return (NULL);
	return (buffer);
}

/**
 * check_buffer - Checks the size of the buffer (buffer length).
 * @buffer: The pointer to the buffer.
 * @buffer_i: The current length of the buffer.
 *
 * Description: Checks the current size of the buffer. If the buffer reaches
 *              a certain treshold (BUFFER size, or multiples of BUFFER),
 *              then it will reallocate its memory and copy its contents.
 * Return: The pointer to the buffer.
 */

void *check_buffer(void *buffer, unsigned int *buffer_i)
{
	if (*buffer_i % BUFFER == 0)
		buffer = _realloc(buffer, *buffer_i, *buffer_i + BUFFER);
	return (buffer);
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
