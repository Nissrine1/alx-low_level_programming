#include "main.h"

/**
* read_textfile - reads a file
* @filename: a pointer to the file name
* @letters: the number of letters to be read and printed
* Return: returns the number of letters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buff;
	ssize_t num_read, num_written;
	size_t i;

	if (filename == NULL)
	{
		return (0);
	}
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}
	buff = (char *) malloc(letters * sizeof(char));
	if (buff == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	num_read = read(file_descriptor, buff, letters);
	num_written = 0;
	for (i = 0; i < (size_t) num_read; i++)
	{
		if (write(STDOUT_FILENO, &buff[i], 1) == -1)
		{
			free(buff);
			close(file_descriptor);
			return (0);
		}
		num_written++;
	}
	free(buff);
	close(file_descriptor);
	return (num_written);
}
