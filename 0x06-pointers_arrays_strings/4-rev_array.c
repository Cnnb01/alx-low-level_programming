#include "main.h"
#include <string.h>
/**
*reverse_array - function that reverses the content of an array of integers.
*@a: The array to be reversed.
*@n: The number of elements in the array.
*/
void reverse_array(int *a, int n)
{
int i, temp;
int *fp = &a[0];
int *lp = &a[n - 1];
for (i = 0; i <= n / 2 ; i++)
{
temp = *fp;
*fp = *lp;
*lp = temp;

fp++;
lp--;
}

}


