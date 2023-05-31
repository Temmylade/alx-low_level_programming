#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: Pointer to the string
 *
 * Return: Pointer to the resulting string
 */
char *string_toupper(char *str)
{
	int i = 0;

	/* Iterate through each character in the string */
	while (str[i] != '\0')
	{
		/* Check if the character is a lowercase letter */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* Convert the lowercase letter to uppercase */
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
