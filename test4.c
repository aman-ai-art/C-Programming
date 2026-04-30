#include<stdio.h>
int dsum(int n);
int count(int n);
int main()
{
    int o, num, c;
    printf("Enter the number of any digit\n");
    scanf("%d",&num);
    o=dsum(num);
    c=count(num);
    printf("The sum of the digits is %d\n",o);
    printf("The number of digits is %d\n",c);
    return 0;
}
int dsum(int n)
{
    if(n==0)
    {
    return 0;
    }
    else
    {
    return (n%10+ dsum(n/10));
    }
}
int count(int n)
{
    if(n==0)
    {
    return 0;
    }
    else
    {
    return ( 1 + count(n/10));
    }
}
