#include <stdio.h>

int main() {
    int i, n = 5;
    while (n >= 1) {
        for (i = 5; i >= n; i--) {
            printf("\t%d\t", i);
        }
        printf("\n");
        n--;
    }
    return 0;
}
