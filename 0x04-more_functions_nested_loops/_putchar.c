#include <unistd.h> 
/**
 * _putchar - prints a given character
 * @c - character to be output
 * Return: 1 for success, -1 otherwise 
*/ 
int _putchar(char c)
{	
	 return(write(1, &c,1));
}
