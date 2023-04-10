#include "main.h"

/**
 * read_textfile - read a certain size and prints the letters to std output
 * @filename: file to read from(filename)
 * @letters:numbers of letters printed.
 * Return: actual size read and printed. If it fails return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	ssize_t n_read, n_wrote;
	char *buf;

	if (filename == NULL)
		return (0);

	/* open */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* malloc buf */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	/* read */
	n_read = read(fd, buf, letters);
	if (n_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	/* write */
	n_wrote = write(STDOUT_FILENO, buf, n_read);
	if (n_wrote == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	close(fd);
	return (n_read);

}
