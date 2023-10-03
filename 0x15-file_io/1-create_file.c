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
return (0);
}
opener = open(filename, O_WRONLY | O_CREAT, 0600);
if (opener == -1)
{
return (0);
}

if (text_content != NULL)
{
write(opener, text_content, strlen(text_content));
}
close(opener);
return (1);
}
