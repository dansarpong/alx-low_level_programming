#include "main.h"

/**
  * create_file - creates a file
  * @filename: filename
  * @text_content: string to write to the file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int file, textlen;

	if (!filename)
		return (-1);
	if (!text_content)
		textlen = 0;
	else
		for (textlen = 0; text_content[textlen] != '\0'; textlen++)
			;

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IROWN | S_IWOWN);
	if (file == -1)
		return (-1);

	if (textlen)
		if (write(file, text_content, textlen) != textlen)
		{
			close(file);
			return (-1);
		}

	close(file);
	return (1);
}
