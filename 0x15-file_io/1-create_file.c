#include "holberton.h"
/**
 * create_file - function that creates a file.
 * @filename: file that I want to create
 * @text_content: text to put in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, length;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	text_content = "";

	file_descriptor = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (file_descriptor == -1)
		return (-1);

	for (length = 0; text_content[length] != '\0'; length++)
		;
	if (write(file_descriptor, text_content, length) == -1)
		return (-1);

	close(file_descriptor);
	return (1);
}
