#include <stdio.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: program to prints all single digit numbers of base 10 starting from 0, followed by a new line
 * Return: Zero value
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
