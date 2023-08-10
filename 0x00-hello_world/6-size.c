#include <stdio.h>
/**
 * main - prints the size of various data type sizes on their compiled machines
 * Return: 0 for success always
*/
int main(void)
{
	char c;
	int i;
	long int j;
	long long k;
	float f;

	printf("Size of a char: %ld byte(s) \n", sizeof(c));
	printf("Size of a int: %ld byte(s) \n", sizeof(i));
	printf("Size of a long int: %ld byte(s) \n", sizeof(j));
	printf("Size of a long long: %ld byte(s) \n", sizeof(k));
	printf("Size of a float: %ld byte(s) \n", sizeof(f));
	printf("[Anything]", stderr);
	return (0);
}
