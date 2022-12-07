#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Name of the file to createt.
 * @text_content: Is a string to write to the file.
 * Return: Returns: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int o, w;
	int text = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
		text = strlen(text_content);

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, text);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
