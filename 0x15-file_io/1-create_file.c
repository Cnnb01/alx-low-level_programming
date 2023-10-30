#include "main.h"
/**
*create_file - Creates a file with text content or truncates if it exists
* @filename: Name of the file to create or truncate
* @text_content: The content to write to the file
*
* Return: 1 on success, -1 on failure
*
*/
int create_file(const char *filename, char *text_content)
{
int opener;
if (filename == NULL)
{
return (-1);
}
opener = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (opener == -1)
{
return (-1);
}
if (text_content != NULL)
{
char byteswritten = write(opener, text_content, strlen(text_content));
if (byteswritten == -1)
{
close(opener);
return (-1);
}
}
close(opener);
return (1);
}
