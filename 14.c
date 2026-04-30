#include <stdio.h>

int main() {
    int i, n, a = 1;
    for (n = 1; n <= 5; n++) {
        for (i = 1; i <= n; i++) {
            printf("\t%d\t", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
