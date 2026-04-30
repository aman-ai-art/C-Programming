#include <stdio.h>

int main() {
    int i, n, x;
    char a = 'A';

    for (n = 1; n <= 5; n++) {

        for (x = 5; x > n; x--) {
            printf("\t");
        }
        for (i = 1; i <= n; i++) {
            printf("\t%c", a);
        }

        printf("\n");
    }
    return 0;
}
