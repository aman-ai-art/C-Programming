#include<stdio.h>
    int main()
        {

            int num, a, b, c, d, num_sum, num_reve;
            printf("Enter the number of four digit\n");
            scanf("%d",&num);
            d=(num%10);
            c=(num/10)%10;
            b=(num/100)%10;
            a=(num/1000);
            printf("The number are '%d' '%d' '%d' '%d'\n",a,b,c,d);
            num_sum=a+b+c+d;
            num_reve=(1000*d)+(100*c)+(10*b)+(a);
            printf("The sum of the number is %d\n",num_sum);
            printf("The reverse of the number is %d\n",num_reve);
            return 0;
        }
