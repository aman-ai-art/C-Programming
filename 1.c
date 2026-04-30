#include<stdio.h>
#include<math.h>
int sum(int a, int b)
{
    int i, n, sum;
    i=a;
    n=b;
    for(i=a;i<=b;i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int ul, ll, result;
    printf("Enter the first number of your series\n");
    scanf("%d",&ll);
    printf("Enter the highest number of the series\n");
    scanf("%d",&ul);
    result=sum(ll, ul);
    printf("\nThe sum of the series is %d\n",result);
    return 0;
}
