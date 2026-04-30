#include <stdio.h>

int main()
{
    int l, u, i, n, check;

    printf("Enter the lowest number of the series of prime numbers\n");
    scanf("%d", &l);

    printf("Enter the highest number of the prime number series\n");
    scanf("%d", &u);

    if (l>=1)
    {   for (i = 2; i <= u; i++)
    {
        check = 1;

        for (n = 2; n <= (i-1); n++)
        {
            if (i % n == 0)
            {
                check = 0;
                break;
            }
        }

        if (check == 1)
        {
            printf("%d is a prime number\n", i);
        }
    }
    }
    else
    {
        printf("Invalid lower limit\n");
    }

    return 0;
}
