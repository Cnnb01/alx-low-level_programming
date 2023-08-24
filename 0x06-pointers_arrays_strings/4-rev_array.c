#include "main.h"
#include <string.h>
/**
*
*/
void reverse_array(int *a, int n)
{
int i, temp ;
int *fp = &a[0];
int *lp = &a[n-1];
for (i = 0; i <= n / 2 ; i++)
{
temp = *fp;
*fp = *lp;
*lp = temp;

fp++;
lp--;
}

}


