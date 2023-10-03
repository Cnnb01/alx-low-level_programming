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
ssize_t bytesread;
size_t reader;
char buffer[1024];
if (filename == NULL)
{
return (0);
}
opener = open(filename, O_RDONLY);
if (opener == -1)
{
return (0);
}
reader = 0;

bytesread = read(opener, buffer, sizeof(buffer));
while (bytesread > 0)
{
write(STDOUT_FILENO, buffer, bytesread);
reader += bytesread;
if (reader >= letters)
{
break;
}
}
close(opener);
return (reader);
}
