#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* طباعة الحروف الصغيرة */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	/* طباعة الحروف الكبيرة */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	/* طباعة سطر جديد */
	putchar('\n');

	return (0);
}
