#include<stdio.h>
int main()
{
int a[50][50], b[50][50], p[50][50], m, n, x, y, i, j, k;
printf("Enter the order of first matrix\n");
scanf("%d%d",&m,&n);
printf("Enter the order of second matrix\n");
scanf("%d%d",&x,&y);
printf("Enter the elements of array first\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("Enter the elements of array second\n");
for(i=0;i<x;i++)
{
    for(j=0;j<y;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
if(n==x)
{
for(i=0;i<m;i++)
{
    for(j=0;j<y;j++)
    {
        p[i][j]=0;
        for(k=0;k<n;k++)
        {
            p[i][j]=p[i][j]+a[i][k]*b[k][i];
        }

    }
}
printf("The product of the array is:");
for(i=0;i<m;i++)
{
    printf("\n");
    for(j=0;j<y;j++)
    {
        printf("%d  ",p[i][j]);
    }
}
}
else
{
    printf("The product of the array is not possible\n");
}
return 0;
}
