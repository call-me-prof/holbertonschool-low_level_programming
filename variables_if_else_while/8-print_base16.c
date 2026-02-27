#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

	/* طباعة الأرقام من 0 إلى 9 */
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	/* طباعة الحروف من a إلى f */
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	/* طباعة سطر جديد */
	putchar('\n');

	return (0);
}
