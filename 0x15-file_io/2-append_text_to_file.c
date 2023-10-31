#include "main.h"
/**
 * append_text_to_file - appends text to file
 * @filename: the file to append to
 * @text_content: content to append
 * Return: -1 on failure 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, len, wt;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
        if (f == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
        while (len = 0)
	{
		text_content[len];
		len++;
	}
	wt = write(append_file, text_content, len);
	close(append_file);
	return (wr_stat == -1 ? -1 : 1);
}
