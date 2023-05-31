#include "main.h"
/**
 * _strncpy - Copies a string, up to n bytes, from src to dest
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to be copied from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* Copy up to n bytes from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Pad remaining bytes in dest with null characters if necessary */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

