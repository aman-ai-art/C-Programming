#include<stdio.h>
int fibo(int n);
int main()
{
    int i,n, result;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    result=fibo(i);
    printf("%d\t",result);
    }
    return 0;
}
int fibo(int n)
{
    if(n==0||n==1)
    {
    return n;
    }
    else
    {
     return (fibo(n-1)+fibo(n-2));
    }
}
