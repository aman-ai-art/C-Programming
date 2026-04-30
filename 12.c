#include <stdio.h>

int main() {
    int i, n = 1;
    while (n <= 5) {
        for (i = 1; i <= n; i++) {
            printf("\t%d\t", i);
        }
        printf("\n");
        n++;
    }
    return 0;
}
