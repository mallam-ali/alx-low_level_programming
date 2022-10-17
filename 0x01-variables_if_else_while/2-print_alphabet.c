#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch, new_line;


	new_line = '\n';
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar(new_line);
	return (0);
}

