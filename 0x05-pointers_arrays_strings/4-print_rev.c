#include "main.h"
#include <string.h>

/**
* print_rec -> printing string in rev
* @s: the string
*/
void print_rev(char *s)
{
	int i, n;
	s = "hello"
	n = strlen(s);
	for (i = n-1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
