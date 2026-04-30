#include <stdio.h>
    int main()
        {
            float prin, tim, rate, s_i;
            printf("Enter the principle, time and rate\n");
            scanf("%f%f%f",&prin,&tim,&rate);
            s_i=(prin*tim*rate)/100;
            printf("The simple interest is %f", s_i);
            return 0;
        }
