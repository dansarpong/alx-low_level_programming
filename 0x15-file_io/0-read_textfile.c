#include <unistd.h>
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
	char buffer[letters];

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	
	bytesread = read(file, buffer, letters);
	if (bytesread == -1)
	{
		close(file);
		return (0);
	}

	if (write(STDOUT_FILENO, buffer, bytesread) != bytesread)
	{
		close(file);
		return (0);
	}

	close(file);
	return (bytesread);
}
