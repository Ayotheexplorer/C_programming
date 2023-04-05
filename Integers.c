#include <stdio.h>
/**
 * main - Entry point
 * @a: Integer one
 * @b: Integer two
 * @c: Addition of integer one and two
 * Return: 0 (Success)
 */

int main(void)
{
	int a = 7;
	int b = 8;
	int c;
	c = a + b;
	
	printf("The value of a is %d\n The value of b is %d\n The value of c is\n %d + %d = %d\n", a, b, a, b, c);

	return (0);
}
