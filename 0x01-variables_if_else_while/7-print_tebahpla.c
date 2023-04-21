#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Program to print alphabet in reverse order
 * Return: Zero value
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
