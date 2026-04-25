#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, n_read, n_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	n_read = read(fd, buffer, letters);
	n_written = write(STDOUT_FILENO, buffer, n_read);

	if (fd == -1 || n_read == -1 || n_written == -1 || n_written != n_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (n_written);
}
