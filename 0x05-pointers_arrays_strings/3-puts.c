#include "main.h"
/**
*_puts -> this puts 
*
*@str: puts a char
*
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
