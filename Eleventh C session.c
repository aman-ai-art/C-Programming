#include <stdio.h>

int sum(int n)
{
    int j = 0, x;
    while (n != 0) {
        x = n % 10;
        j = j + x;
        n = n / 10;
    }

    return j;
}
int main()
{
    int n, temp, count = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    temp = n;
    do {
        count++;
        temp /= 10;
    } while (temp != 0);
    printf("The number of digits is %d\n", count);
    int a = sum(n);
    printf("The sum of the digits is %d\n", a);
    int reverse = 0, r, temp2 = n;
    while (temp2 != 0) {
    r = temp2 % 10;
    reverse = reverse * 10 + r;
    temp2 /= 10;
    }
printf("The reverse of the number is %d\n", reverse);
    return 0;
}
