#include <stdio.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: program that prints the alphabet in lowercase
 * Return: Zero
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
