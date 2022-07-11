#include "main.h"

/**
* swap_int -> give two integers
*@a: num1
*@b: num2
*/
void swap_int(int *a, int *b)
{
	int chg;
	
	chg = *a;
	*a = *b;
	*b = chg;
}
