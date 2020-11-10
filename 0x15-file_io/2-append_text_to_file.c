#include "holberton.h"

/**
  * append_text_to_file -  appends text at the end of a file
  * @filename: name of the file
  * @text_content: add at the end of the file
  * Return: 1 if success
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, w_file, c_file, a;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (a = 0; text_content[a] != '\0'; a++)
			;
		w_file = write(file, text_content, a);
	}
	if (w_file == -1)
		return (-1);
	c_file = close(file);
	if (c_file == -1)
		return (-1);
	return (1);
}
