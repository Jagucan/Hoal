#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Is the name of the file.
 * @text_content: Is the string to add at the end of the file.
 * Return: Return: 1 on success and -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int text = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
		text = strlen(text_content);

	o = open(filename, O_APPEND | O_WRONLY);
	w = write(o, text_content, text);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
