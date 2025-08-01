#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append
 *
 * Return: 1 if succes otherwise 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t n_written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;
	n_written = write(fd, text_content, i);
	if (n_written != i)
		return (-1);

	return (1);
}
