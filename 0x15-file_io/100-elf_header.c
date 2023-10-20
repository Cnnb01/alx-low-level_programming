#include "main.h"
/**
* print_elf_header - Prints the ELF header fields of an ELF file
*/
#define ERR_MSG "Not an ELF file\n"
#define ERROR 98
void print_elf_header(int fd)
{
Elf32_Ehdr elf_header;
lseek(fd, 0, SEEK_SET);
read(fd, &elf_header, sizeof(elf_header));
printf("Magic:      %#x\n", elf_header.e_ident[EI_MAG0]);
printf("Class:      %d\n", elf_header.e_ident[EI_CLASS]);
printf("Data:       %d\n", elf_header.e_ident[EI_DATA]);
printf("Version:    %d\n", elf_header.e_version);
printf("OS/ABI:     %d\n", elf_header.e_ident[EI_OSABI]);
printf("ABI Version:%d\n", elf_header.e_ident[EI_ABIVERSION]);
printf("Type:       %d\n", elf_header.e_type);
printf("Entry point:%#x\n", elf_header.e_entry);
}
/**
* main - Checks the ELF header of a file and prints its fields
* @argc: Argument count
* @argv: Argument vector
*
* Return: 0 on success, error code on failure
*/
int main(int argc, char *argv[])
{
int fd;
Elf32_Ehdr elf_header;
if (argc != 2)
{
printf("Usage: %s elf_filename\n", argv[0]);
return (1);
}
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
perror("Error opening file");
return (1);
}

if (read(fd, &elf_header, EI_NIDENT) != EI_NIDENT)
{
printf("%s", ERR_MSG);
return (ERROR);
}
print_elf_header(fd);
close(fd);
return (0);
}
