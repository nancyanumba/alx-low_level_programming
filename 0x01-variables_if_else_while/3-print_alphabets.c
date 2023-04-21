#include <stdio.h>

/**
 * main- program to print lower and upper case alphabet
 * @void: Null value
 *
 * Description: a-z, A-Z.
 * Return: Zero value
 */

int main(void)
{
	char a, A;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (A = 'A'; A <= 'Z'; A++)
		putchar(A);
	putchar('\n');
	return (0);
}
