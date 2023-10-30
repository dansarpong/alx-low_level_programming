#include "main.h"

/**
  * read_textfile - reads a text file and prints to stdout
  * @filename: filename
  * @letters: number of letters to print
  * Return: actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, bytesread;
	char *buffer = malloc(sizeof(char) * letters);

	if (!filename)
	{
		free(buffer);
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}

	bytesread = read(file, buffer, letters);
	if (bytesread == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	if (write(STDOUT_FILENO, buffer, bytesread) != bytesread)
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);
	return (bytesread);
}
