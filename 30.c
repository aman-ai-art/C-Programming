#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, operation;
    char op[1];
    printf("Enter the expression to be solved\n");
    scanf("%d %c %d",&a,op,&b);
    switch(op[0])
    {
    case '+':
        operation=a+b;
        break;
    case '-':
        operation=a-b;
        break;
    case '*':
        operation=a*b;
        break;
    case '/':
        operation=a/b;
        break;
    case '%':
        operation=a%b;
        break;
    default:
        printf("\nOperation invalid\n");
    }
    printf("The result is %d\n",operation);
    return 0;\
}
