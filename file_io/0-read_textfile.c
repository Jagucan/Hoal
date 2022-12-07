#include "main.h"

/**
 * 
 * 
 * 
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    	ssize_t open, read, write;
	    char *text;

	if (!filename)
		return (0);

	text = malloc(sizeof(letters));
	if (!text)
		return (0);

	open = o(filename, O_RDONLY);
	read = r(open, text, letters);
	write = w(STDOUT_FILENO, text, read);

	if (open == -1 || read == -1 || write == -1)
	{
		free(text);
		return (0);
	}

	free(text);
	close(open);
	return (write);
}
