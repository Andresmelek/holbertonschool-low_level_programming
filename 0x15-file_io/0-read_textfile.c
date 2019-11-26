#include "holberton.h"
/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: file that I want to read
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, file_read, file_write;
	char *buf;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buf =  malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	file_read = read(file_descriptor, buf, letters);
	if (file_read == -1)
		return (0);

	file_write = write(STDOUT_FILENO, buf, file_read);
	if (file_write == -1)
		return (0);

	close(file_descriptor);
	return (file_write);
}
