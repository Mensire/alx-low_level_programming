#include<stdio.h>

/**
 * main -Executed first. Prints both lower and uppercase alphabets.
 *
 * Return: Always 0.
 */

int main(void)
{
	char alpha;
/*lowercase alphabet*/
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
/*uppercase alphabet*/
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}

	{
	  putchar('\n');
	}
	return (0);
}
