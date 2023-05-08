#include "main.h"

/**
 * read_textfile - Read text file print to STDOUT
 *
 * @filename: pointer
 * @letters: size_t
 *
 * Return: w- actual number of bytes read and printed 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, r, m;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	m = read(fd, buf, letters);
	r = write(STDOUT_FILENO, buf, m);

	free(buf);
	close(fd);
	return (r);

}
