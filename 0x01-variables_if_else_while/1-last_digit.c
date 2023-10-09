#include <stlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a program that prints  the last digit of the number stored in the variable n
 * Return: 0 (success)
 */
int main(void)
{       
        int n;
        
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        int last_digit = n % 10;
        if (n > 5)
                printf("Last digit of %d is %d and is greater than 5\n", n last_digit);
	if (n == 5)
		printf("Last digit of %d is %d and is 0
