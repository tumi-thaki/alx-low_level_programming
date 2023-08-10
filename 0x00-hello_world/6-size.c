#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled and run on
 * Return: 0 for success always
*/
int main(void)
{
	char c;
	int i;
	long int j;
	long long k;
	float f;

	printf("Size of char: %ld byte(s) \n", sizeof(c));
	printf("Size of int: %ld byte(s) \n", sizeof(i));
	printf("Size of long int: %ld byte(s) \n", sizeof(j));
	printf("Size of long long: %ld byte(s) \n", sizeof(k));
	printf("Size of float: %ld byte(s) \n", sizeof(f));
	return (0);
}
