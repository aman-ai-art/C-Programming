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
    int x, sum, series, i, y;
    printf("Enter the nth number of the series\n");
    scanf("%d",&x);
    sum=fibonacci(x);
    printf("\nThe sum of the series is %d\n",sum);
    for(i=1;i<=x;i++)
    {
        series=fibonacci(i);
        printf("\nThe number of the series is %d\n",series);
    }
printf("Thank you.\nEnter (0) for exit.\n");
scanf("%d",&y);
if(y==0)
return 0;
}
