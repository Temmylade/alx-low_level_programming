#include "main.h"
#include <stdio.h>
/**
 * rot13 - Encodes a string using ROT13
 * @str: Pointer to the string
 *
 * Return: Pointer to the resulting string
 */
char *rot13(char *str)
{
	int i, j;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	/* Iterate through each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Iterate through the alpha array */
		for (j = 0; alpha[j] != '\0'; j++)
		{
			/* Check if the current character matches a letter in the array */
			if (str[i] == alpha[j])
			{
				/* Replace the letter with the corresponding ROT13 letter */
				str[i] = rot13[j];
				break;
			}
		}
	}

	return (str);
}
