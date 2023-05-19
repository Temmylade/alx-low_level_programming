#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
}

