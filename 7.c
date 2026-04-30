#include<stdio.h>
#include<math.h>
int main()
{
    int n1, sum, check, x;
    for(n1=150;n1<=500;n1++)
    {
        x=n1;
        sum=0;
        while(x>0)
        {
            sum=sum+pow(x%10,3);
            x/=10;
        }
        check=n1;
        if(sum==check)
        {
            printf("\nThe number %d is an Armstrong number\n",check);
        }
        }
        return 0;
}
