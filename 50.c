#include<stdio.h>
int main()
{
    int i, j, m, n, mat[20][20];
    printf("Enter the order of matrix\n");
    scanf("%d%d",&m,&n);
    if(m==n)
    {
    printf("Enter the elements of matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The matrix is as:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j)
            {
                mat[i][j]=0;
            }
        }
    }
    printf("The lower triangular matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("\nOperation is invalid for the matrix.\n");
    }
    return 0;
}
