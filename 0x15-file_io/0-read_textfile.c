#include "main.h"
/**
*read_textfile - Reads and prints the content of a text file to standard output
* @filename: The name of the file to read
* @letters: The number of letters to read and print
*
* Return: The number of letters actually read and printed. 0 on error.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int opener;
size_t reader;
if (filename == NULL)
{
return (0);
}
opener = open (filename, O_RDONLY);
if (opener == -1)
{
return (0);
}
else
{
reader = 0;
while (reader < letters)
{
char buffer[1024];
ssize_t bytesread = read(opener, buffer, sizeof(buffer));
if (bytesread == -1)
{
perror ("Error");
close (opener);
return (0);
}
write (STDOUT_FILENO, buffer, bytesread);
reader+=bytesread;
}
close (opener);
return (reader);
}
return (0);
}
