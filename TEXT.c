#include<stdio.h>
int main()
{
int n, i;
char text[12]="PROGRAMMING";
for(n=11;n>=0;n--)
{
for(i=1;i<=n;i++)
{
printf("%c",text[i-1]);
}
printf("\n");
}
return 0;
}
