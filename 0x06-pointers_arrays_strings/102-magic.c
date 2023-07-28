#include <stdio.h>

int main(void)
{
	int value;
	int array[5];
	int *pointer;

	array[2] = 1024;
	pointer = &value;

	*(pointer + 5) = 98;
	printf("array[2] = %d\n", array[2]);

	return (0);
}
