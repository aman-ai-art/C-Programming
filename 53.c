#include<stdio.h>
int main()
{
int a[50][50], b[50][50], p[50][50], m, n, x, y, i, j, flag=1;
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
if(m==x&&n==y)
{
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
         if(a[i][j]!=b[i][j])
         {
           flag=0;
           break;
         }
        }
        if(flag==0)
        {
            break;
        }
    }
    if(flag==1)
    {
        printf("\nThe matrices are equal\n");
    }
    else
    {
        printf("\nThe matrices are not equal\n");
    }
}
else
{
    printf("\nThe matrices are not equal\n");
}
return 0;
}
