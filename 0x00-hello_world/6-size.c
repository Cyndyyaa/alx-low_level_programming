#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

ptint f("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
print f("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
print f("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
print f("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
print f("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
