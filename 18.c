#include<stdio.h>
int main()
{
int i, n, x;
    for (n = 1; n <= 5; n++) {

        for (x = 5; x > n; x--) {
            printf("\t");
        }
        for (i = 1; i <= n; i++) {
            printf("\t%d",i);
        }

        printf("\n");
}
return 0;
}
