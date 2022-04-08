#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Return: 0
 */
int main(void)
{
int c;
int d;
int e;
int f = 0;

while (f < 10)
{
	e = 0;
	while (e < 9)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (!(f == 0 && e == 0 && d == 0 && c == 0) && !(f == 0 && e == 1 && d == 0 && c == 0)
				&& !(f == 0 && e == 1 && d == 0 && c == 1))
				{
					putchar('0' + f);
					putchar('0' + e);
					putchar(' ');
					putchar('0' + d);
					putchar('0' + c);
					if (!(f + e == 17 && c + d == 18 && d == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			d++;
		}
		e++;
	}
	f++;
}
putchar('\n');
return (0);
}
