#include<stdio.h>
int main()
{
    int i, j=2, n, check;
    printf("%d\n",j);
    for(n=3;n<=200;n++)
    {
        for(i=2;i<=n-1;i++)
        {
            check=1;
            if(n%i==0)
            {
                check=0;
                break;
            }
        }
        if(check==1)
        {
            printf("%d\n",n);
        }
    }
return 0;
}
