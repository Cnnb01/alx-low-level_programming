#include "main.h"
/**
*swap_int - a function that swaps the values of two integers.
*@a:  A pointer to an integer.
*@b: A pointer to an integer
*
*Description: a function that swaps the values of two integers.
*/
void swap_int(int *a, int *b)
{
int hold;
hold = *a;
*a = *b;
*b = hold;
}
