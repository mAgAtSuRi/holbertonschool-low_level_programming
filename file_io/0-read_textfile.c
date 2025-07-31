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
	int fd, n_read, n_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters)
	if (buffer == NULL);
		return (0);

	fd = open(filename, O_RDWR);
	n_read = read(fd, buffer, letters);
	n_written = write(fd, buffer, n_read);
	free(buffer);
	close(fd);

	if (n_written == letters)
		return (n_written);
	else
		return (-1);
}
