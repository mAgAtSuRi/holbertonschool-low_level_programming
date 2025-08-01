#include "main.h"

/**
 * close_file - close 2 files
 * @fd1: first file to close
 * @fd2: second file to close
 */
void close_file(int fd1, int fd2)
{
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}

/**
 * cp - copy contetn from a file to another file
 * @file1: first file
 * @file2: second file
 */
void cp(char *file1, char *file2)
{
	int fd1, fd2;
	ssize_t n_read, n_written;
	char buffer[1024];

	fd1 = open(file1, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}

	fd2 = open(file2, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
		close(fd1);
		exit(99);
	}

	while ((n_read = read(fd1, buffer, 1024)) > 0)
	{
		n_written = write(fd2, buffer, n_read);
		if (n_written == -1 || n_written != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
			close_file(fd1, fd2);
			exit(99);
		}
	}

	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		close_file(fd1, fd2);
		exit(98);
	}

	close_file(fd1, fd2);
}

/**
 * main - copy content of a file to another file
 * @argc: number of arguments
 * @argv: pointer to the list of arguments
 *
 * Return:0 or error code
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return(0);
}
