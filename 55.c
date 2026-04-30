#include<stdio.h>
int main()
{
int a[50][50], b[50][50], p[50][50], m, n, x, y, i, j, flag, ca=0, cb=0;
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
printf("Enter the variable to search\n");
scanf("%d",&flag);
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i][j]==flag)
        {
            ca=1;
            break;
        }
    }
    if(ca==1)
    {
        break;
    }
}
for(i=0;i<x;i++)
{
    for(j=0;j<y;j++)
    {
        if(b[i][j]==flag)
        {
            cb=1;
            break;
        }
    }
     if(cb==1)
    {
        break;
    }
}
if(ca && cb)
{
    printf("\nThe variable is present in both of the array\n");
}
else if(ca)
{
    printf("\nThe variable is present in first array\n");
}
else if(cb)
{
    printf("\nThe variable is present in second array\n");
}
else
{
    printf("\nThe variable is absent.\n");
}
return 0;
}
