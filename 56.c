#include<stdio.h>
int main()
{
int mat[2][3], i, j;
printf("Enter elements of the matrix of order 2X3\n");
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&mat[i][j]);
    }
}
printf("Matrix after replacing the even elements by 0\n");
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        if(mat[i][j]%2==0)
        {
            mat[i][j]=0;
        }
        printf("%d ",mat[i][j]);
    }
    printf("\n");
}
return 0;
}
