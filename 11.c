#include <stdio.h>

int main() {
    int i, n;
    for (n = 1; n <= 5; n++) {
        for (i = 1; i <= n; i++) {
            printf("\t%d\t", n);
        }
        printf("\n");
    }
    return 0;
}
