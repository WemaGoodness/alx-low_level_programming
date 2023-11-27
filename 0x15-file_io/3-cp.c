#include "main.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char *file_from, *file_to;

	fd_from = fd_to = -1;
	file_from = argv[1];
	file_to = argv[2];

	if (check_args(argc, argv) == -1)
	{
		exit(97);
	}

	if (open_files(argv[1], argv[2]) == -1)
	{
		exit(98);
	}

	if (copy_files(fd_from, fd_to, file_from, file_to) == -1)
	{
		exit(99);
	}

	if (close_files(fd_from, fd_to) == -1)
	{
		exit(100);
	}

	return (0);
}

/**
 * check_args - checks number of arguments and print usage message
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: success
 */
int check_args(int argc, char *argv[])
{
	(void) argv;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (-1);
	}

	return (0);
}


/**
 * open_files - opens the files and print error messages
 * @file_from: file source
 * @file_to: file destination
 *
 * Return: Success
 */
int open_files(char *file_from, char *file_to)
{
	int fd_from, fd_to;
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (-1);
	}

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		return (-1);
	}

	return (0);
}

/**
 * copy_files - copies file content and print error messages
 * @fd_from: file descriptor source
 * @fd_to: file descriptor destination
 * @file_from: file source
 * @file_to: file destination
 *
 * Return: Success
 */
int copy_files(int fd_from, int fd_to, char *file_from, char *file_to)
{
	ssize_t n_read, n_write;
	char buffer[BUFFER_SIZE];

	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_write = write(fd_to, buffer, n_read);
		if (n_write == -1 || (size_t) n_write != (size_t) n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			return (-1);
		}
	}

	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		return (-1);
	}

	return (0);
}

/**
 * close_files - closes files and print error messages
 * @fd_from: file descriptors source
 * @fd_to: file descriptor destination
 *
 * Return: success
 */
int close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		close(fd_to);
		return (-1);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (-1);
	}

	return (0);
}
