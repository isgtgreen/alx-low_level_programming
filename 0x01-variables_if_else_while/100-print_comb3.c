#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int onese = '0';
	int tense = '0';

	for (tense = '0'; tense <= '9'; tense++)
	{
		for (onese = '0'; onese <= '9'; onese++)
		{
			if (!((onese == tense) || (tense > onese)))
			{
				putchar(tense);
				putchar(onese);
				if (!(onese == '9' && tense == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
