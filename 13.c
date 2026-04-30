#include <stdio.h>

int main() {
    int i, n;
    char a = 'A';
    for (n = 1; n <= 5; n++) {
        for (i = 1; i <= n; i++) {
            // Inner loop for spacing
            for (int j = 4; j >= 0; j--) {
                printf("\t");
            }
            printf("\t%c\t", a);
        }
        printf("\n");
    }
    return 0;
}
