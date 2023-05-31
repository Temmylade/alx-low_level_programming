#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: 0 if the strings are equal, negative value if s1 is less than s2,
 *         positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Compare characters until a difference is found or both strings end */
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;

	/* Return the difference in ASCII values or 0 if the strings are equal */
	return (s1[i] - s2[i]);
}

