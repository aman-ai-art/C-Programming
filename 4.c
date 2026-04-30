#include<stdio.h>
int fibonacci(int n)
{
    if(n<=0)
    {return 0;}
    else if(n==1)
    {return 1;}
    else
    {return n + fibonacci(n-1);}
}
int main()
{
    int x, series;
    printf("Enter the nth number of the series\n");
    scanf("%d",&x);
    series=fibonacci(x);
    printf("\nThe sum of the series is %d\n",series);
    return 0;
}
