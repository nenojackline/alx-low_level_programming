#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Return: return 0 if successful
 */
int main(void)
{
		char abc[] = "abcdefghijklmnopqrstuvwxyz";
		int i;

		for (i = 0; i < 26; i++)
		{
			putchar(abc[i]);
		}
		putchar('\n');
		return (0);
}
