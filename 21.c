#include<stdio.h>
int main()
{
int i, n;
char a='*';
    for (n = 5; n >= 1; n--) {

        for (i = 1; i <= n; i++) {
            printf("\t%c",a);
        }

        printf("\n");
}
return 0;
}
