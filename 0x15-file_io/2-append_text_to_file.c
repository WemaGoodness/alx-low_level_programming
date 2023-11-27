#include "main.h"

/**
 * append_text_to_file - adds text at the end of a file
 * @filename: name of file
 * @text_content - text to append
 *
 * Return: Success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_write;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		n_write = write(fd, text_content, _strlen(text_content));
		if (n_write == -1 || (size_t) n_write != _strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
