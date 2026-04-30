#include<stdio.h>
#include<math.h>
   int fact(int n)
   {
       if (n<=0)
       {
           return 1;
       }
       else{
       return n*fact(n-1);}
    }
int main()
{
    int n, factorial;
    printf("Enter the number to find the factorial\n");
    scanf("%d",&n);
    factorial=fact(n);
    printf("The factorial of the number is %d\n",factorial);
    return 0;
}
