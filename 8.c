#include<stdio.h>
void serial()
{
int i, n=5;
    while(n>=1)
    {
        for(i=1;i<=n;i++)
        {
            printf("\t%d\t",i);
        }
        printf("\n");
        n--;
    }
}
void reverse()
{
int i, n=1;
    while(n<=5)
    {
        for(i=5;i>=n;i--)
        {
            printf("\t%d\t",i);
        }
        printf("\n");
        n++;
    }
}
int main()
{
    serial();
    printf("\n\n");
    reverse();
    return 0;
}
