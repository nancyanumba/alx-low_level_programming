#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: program to Print numbers from zero to nine  separated by comma and space
 * Return: Zero value
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
