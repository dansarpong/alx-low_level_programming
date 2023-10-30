#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

/**
  * main - a program that copies the content of a file to another file
  * @argc: argument counter
  * @argv: argument pointer
  * Return: 0 on success, exit with appropriate codes otherwise
  */
int main(int argc, char **argv)
{
	int file_from, file_to, bytesWR, f1, f2;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((bytesWR = read(file_from, buf, BUFSIZ)) > 0)
	{
		if (file_to == -1 || write(file_to, buf, bytesWR) != bytesWR)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			exit(99);
		}
	}
	if (bytesWR == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f1 = close(file_to);
	f2 = close(file_from);
	if (f1 == -1 || f2 == -1)
	{
		if (f1 == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to);
		if (f2 == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit(100);
	}
	return (0);
}
