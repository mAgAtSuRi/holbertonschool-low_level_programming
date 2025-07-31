#include "main.h"

/**
 * create_file - creates a new file
 * @filename: file name
 * @text_content: string to write
 *
 * Return: 1 succes otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t n_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}

	n_write = write(fd, text_content, i);
	if (n_write != i)
		return (-1);

	close(fd);
	return (1);
}
