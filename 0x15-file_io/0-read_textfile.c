#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stout
 * @filename: filename
 * @letters:  number of letters it should read and print
 * Return: prints to stdout
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o_file, r_file, w_file;
	char *s_let;

	if (filename == NULL)
		return (0);

	o_file = open(filename, O_RDONLY);

	if (o_file == -1)
		return (0);

	s_let = malloc(sizeof(char) * letters);
	if (s_let == NULL)
		return (0);

	r_file = read(o_file, s_let, letters);

	if (r_file == -1)
		return (0);

	w_file = write(STDOUT_FILENO, s_let, r_file);

	if (w_file == -1)
		return (0);
	return (w_file);
}
