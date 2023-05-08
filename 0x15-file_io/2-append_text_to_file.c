#include "main.h"

/**
 * append_text_to_file - Entry point
 * @filename: char pointer
 * @tex_content: char pointer
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int m, r, l = 0;

	if (filename == 0)
		return (-1);
	if (text_content != 0)
	{
		while (text_content[l])
			l++;
	}
	m = open(filename, O_WRONLY | O_APPEND);
	r = write(m, text_content, l);
	if (m == -1 || r == -1)
		return (-1);
	close(m);

	return (1);
}
