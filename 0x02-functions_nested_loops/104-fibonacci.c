#include <stdio.h>

/**
 * main - Program that prints 1st 98 Fibonacci nums,
 * starting with 1 and 2
 * Return: Always (0) zero
 */

int main(void)
{
        int count;
        unsigned long num1 = 0, num2 = 1, sum;
        unsigned long num1_int1, num1_int2, num2_int1, num2_int2;
        unsigned long int1, int2;

        for (count = 0; count < 2; count++)
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
        for (count = 2; count < 98; count++)
        {
                int1 = num1_int1 + num2_int1;
                num2 = num1_int2 + num2_int2;
                if (num1_int2 + num2_int2 > 9999999999)
                {
                        int1 += 1;
                        int2 %= 10000000000;
                }
                printf("%lu%010lu", int1, int2);
                if (count != 97)
                        printf(", ");
                num1_int1 = num2_int1;
                num1_int2 = num2_int2;
                num2_int1 = int2;
                num2_int2 = int2;
        }
        printf("\n");
        return (0);
}
