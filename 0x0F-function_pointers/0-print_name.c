#include "function_pointers.h"
/**
* print_name - Calls a function to print a name.
* @name: The name to be printed.
* @f: A pointer to the function that prints the name.
*
* This function takes a name and a function pointer as parameters.
* It calls the specified function, passing the name as an argument,
* which results in printing the name using the provided function.
*/
void print_name(char *name, void (*f)(char *))
{
(*f)(name);

}
