#include<stdio.h>
int main ()
{
    int i=1, j, k;
    while(i<6)
    {
        for(j=5-i;j>0;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        printf("\n");
        i++;
    }
    return 0;
}
