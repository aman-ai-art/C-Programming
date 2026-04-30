#include<stdio.h>
int main()
    {
        int n, result,x;
        while(n!=3)
        {
        printf("\n1.find the sum of n natural number\n2.Conversion of ASCII code to char\n3.Exit\n");
        scanf("%d",&n);
        result=0;
        switch(n)
        {
        case 1:
            int a;
            printf("Enter the value of N.\n");
            scanf("%d",&a);
            for(int i=1;i<=a;i++)
            {
                result=result+i;
            }
            printf("\nThe sum of the natural number is %d\n",result);
            break;
        case 2:
            int b;
            printf("\nEnter the ASCII code\n");
            scanf("%d",&b);
            printf("\nThe Character is %c\n",b);
            break;
        case 3:
            break;

        }}
        return 0;
    }
