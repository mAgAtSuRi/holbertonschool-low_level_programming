#include "main.h"

/**
 * read_textfile - read a textfile and prints it
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	void *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	n_read = read(fd, buffer, letters);
	n_written = write(STDOUT_FILENO, buffer, n_read);
	free(buffer);
	close(fd);

	if (n_written == n_read)
		return (n_written);
	else
		return (-1);
}
