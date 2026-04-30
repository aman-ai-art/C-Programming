#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
void add(int a, int b)
{
    printf("The sum of the number is %d\n",a+b);
}
void subtract(int a, int b)
{
    printf("The difference of the number is %d\n",a-b);
}
void multiply(int a, int b)
{
    printf("The multiplication of the number is %d\n",a*b);
}
void division(int a, int b)
{
    printf("The division of the number without reminder is %d\n",a/b);
}
void reminder(int a, int b)
{
    printf("The modulus of the number is %d\n",a%b);
}
int main()
    {
        int a, b;
        char op;
        printf("Enter two number\n");
        scanf("%d%d",&a,&b);
        printf("Enter the sign of the operation(+,-,*,/)\n");
        scanf(" %c", &op);
        if (op == '+')
        {
            add(a,b);
        }
        else if (op == '-')
        {
            subtract(a,b);
        }
        else if (op == '*')
        {
            multiply(a,b);
        }
        else if (op == '/')
        {
            division(a,b);
        }
        else if (op == '%')
        {
            reminder(a,b);
        }
        else
        {
            printf("Invalid Input");
        }
        return 0;
    }
