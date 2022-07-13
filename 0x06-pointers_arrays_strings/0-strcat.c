#include "main.h"

/**
*
* *-strcat _> this is func
* @dest: 1 par
* @src: 2 par
*Return: string
*/
char *_strcat(char *dest, char *src)
{
	int len = 0, i;
	
	while (dest[len])
		len++;
		
	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[1];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
