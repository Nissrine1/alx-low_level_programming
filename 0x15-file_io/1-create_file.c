#include "main.h"

/**
* create_file - creates a file.
*
* @filename: a pointer to the file name
* @text_content: string to write to the file
*
* Return: returns 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t num_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		num_written = write(fd, text_content, strlen(text_content));
	}
	else
	{
		num_written = 0;
	}
	if (num_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
