#include "holberton.h"

/**
 * create_file - reads a text file and prints it to the POSIX stout
 * @filename: filename
 * @text_content:  number of letters it should read and print
 * Return: prints to stdout
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t o_file;
	int a = 0;

	if (filename == NULL)
		return (-1);
	o_file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (o_file == -1)
		return (-1);
	if (text_content)
	{
		a = 0;
		while (text_content[a] != '\0')
			a++;
	}
	write(o_file, text_content, a);
	return (1);
}
