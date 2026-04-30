#include<stdio.h>
int main()
{
int i, j, n;
j=4;
for(n=1;n<=5;n++)
{
    while(j>=0)
    {
        printf(" ");
        j--;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
    }
    printf("\n");
    j=5-i;
}
return 0;
}
