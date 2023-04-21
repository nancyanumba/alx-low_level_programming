#include <stdio.h>

/**
 * main- program that prints the alphabet in lowercase
 * @void: Null value
 *
 * Description: a to z
 * Return: Zero value
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
