#include "main.h"
void positive_or_negative(int i)
/**
 * positive_or_negative - program to determine whether the number n is positive or negative
 */
{
	if (i > 0)
                printf("%d is positive\n", i);
        if (i == 0)
                printf("%d is zero\n", i);
        if (i < 0)
                printf("%d is negative\n", i);
        
}
