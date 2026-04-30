#include <stdio.h>

int main() {
    int i, n, a = 1;
    for (i = 1; i <= 5; i++) {
        for (n = 1; n <= i; n++) {
            printf("%d\t", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
