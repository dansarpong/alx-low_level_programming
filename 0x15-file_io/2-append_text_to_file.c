#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file
  * @filename: filename
  * @text_content: text contents
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (!text_content)
		len = 0;
	else
		for (len = 0; text_content[len] != '\0'; len++)
			;

	if (len)
		if (write(file, text_content, len) != len)
		{
			close(file);
			return (-1);
		}

	close(file);
	return (1);
}
