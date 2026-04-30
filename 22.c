#include<stdio.h>
int main()
{
int i, n, x, y;
    for (n = 5; n >= 1; n--) {

        for (i = 1; i <= n; i++) {
            printf("\t%d",n);
        }

        printf("\n");
}
printf("Thank you.\nEnter (0) for exit.\n");
scanf("%d",&y);
if(y==0)
return 0;
}

