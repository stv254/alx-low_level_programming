#include <stdio.h>
/**
 * main - sizes
 * Return: always return 0
 *
 */
int main(void)
{
	char (a);
	int (b);
	long int (c);
	long long int (d);
	float (f);

printf("Size of a char: %ul byte(s)\n", sizeof(char));
printf("Size of an int: %ul byte(s)\n", sizeof(int));
printf("Size of a long int: %ul byte(s)\n", sizeof(long int));
printf("Size of long long int: %ul byte(s)\n", sizeof(long long int));
printf("Size of float int: %ul byte(s)\n", sizeof(float));
return (0);
}
