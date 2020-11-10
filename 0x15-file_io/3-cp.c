#include "holberton.h"

/**
 * printfails - print the error if fails message
 * @error: error from main
 * @file: file from main
 * Return: error
 */

int printfails(int error, char *file)
{
	switch (error)
	{
	case (97):
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		break;
	case (98):
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		break;
	case (99):
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		break;
	case (100):
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
		break;
	}
	return (error);
}

/**
 * main - copies the content of a file to another file.
 * @argc: numbers of arguments
 * @argv: values of arguments
 * Return: errors if fails
 */

int main(int argc, char *argv[])
{
	ssize_t open_file1, open_file2, file_read, file_write, file_close;
	char buffer[1024];

	if (argc != 3)
		return (printfails(97, NULL));

	open_file1 = open(argv[1], O_RDONLY);
	if (open_file1 == -1)
		return (printfails(98, argv[1]));
	open_file2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (open_file2 == -1)
	{
		file_close = close(open_file1);
		if (file_close == -1)
			return (printfails(100, argv[2]));
		return (printfails(99, argv[2]));
	}
	while ((file_read = read(open_file1, buffer, 1024)))
	{
		if (file_read == -1)
			return (printfails(98, argv[1]));
		file_write = write(open_file2, buffer, file_read);
		if (file_write == -1)
			return (printfails(99, argv[2]));
	}
	file_close = close(open_file1);
	if (file_close == -1)
		return (printfails(100, "a"));
	file_close = close(open_file2);
	if (file_close == -1)
		return (printfails(100, "b"));
	return (0);
}
