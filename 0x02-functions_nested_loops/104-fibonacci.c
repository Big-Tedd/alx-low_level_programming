#include <stdio.h>

/**
 * main - Program that prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * Return: Always (0) zero
 */

int main(void)
{
	int count;
	unsigned long num1 = 0, num2 = 1, sum;
	unsigned long num1_int1, num1_int2, num2_int1, num2_int2;
	unsigned long int1, int2;

	for (count = 0; count < 92; count++)
	{
		sum = num1 + num2;
		printf("%lu, ", sum);
		num1 = num2;
		num2 = sum;
	}
	num1_int1 = num1 / 10000000000;
	num2_int1 = num2 / 10000000000;
	num1_int2 = num1 % 10000000000;
	num2_int2 = num2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
		int1 = num1_int1 + num2_int1;
		int2 = num1_int2 + num2_int2;
		if (num1_int2 + num2_int2 > 9999999999)
		{
			int1 += 1;
			int2 %= 10000000000;
		}
		printf("%lu%lu", int1, int2);
		if (count != 98)
			printf(", ");
		num1_int1 = num2_int1;
		num1_int2 = num2_int2;
		num2_int1 = int1;
		num2_int2 = int2;
	}
	printf("\n");
	return (0);
}
