#include <stdio.h>

void main()
{
    int num, i, is_prime = 1; // is_prime is a flag, 1 means true, 0 means false

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num <= 1)
    {
        is_prime = 0;
    }
    // Check for divisors from 2 up to the number - 1
    else
    {
        for (i = 2; i < num; i++)
        {
            // If num is divisible by i, it's not a prime number
            if (num % i == 0)
            {
                is_prime = 0;
                break; // No need to check further, we found a divisor
            }
        }
    }

    // Check the value of the flag and print the result
    if (is_prime == 1)
    {
        printf("%d is a prime number.\n", num);
    } else
    {
        printf("%d is not a prime number.\n", num);
    }


}
