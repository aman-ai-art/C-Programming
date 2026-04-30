#include<stdio.h>
int main()
{
int i, n, x;
    for (n = 5; n >= 1; n--) {

        for (i = 1; i <= n; i++) {
            printf("\t%d",i);
        }

        printf("\n");
}
return 0;
}
