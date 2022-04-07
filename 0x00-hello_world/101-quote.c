#include <stdio.h>
#include <unistd.h>
/**
 * main - main block
 * Return: 1
 */
int main(void)
{
	char word[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, word, sizeof(word)-1);
	return (1);
}
