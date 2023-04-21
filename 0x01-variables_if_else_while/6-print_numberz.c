#include <stdio.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: program to print single digit numbers from ten to zero
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
