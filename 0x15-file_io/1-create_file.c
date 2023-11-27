#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: Success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_write;
	mode_t mode;

	if (filename == NULL)
	{
		return (-1);
	}

	mode = S_IRUSR | S_IWUSR;
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		n_write = write(fd, text_content, _strlen(text_content));
		if (n_write == -1 || n_write != _strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

/**
 * _strlen - gets length of string
 * @s: string
 *
 * Return: len
 */
size_t _strlen(char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
