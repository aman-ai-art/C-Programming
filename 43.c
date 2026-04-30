#include<stdio.h>
int main()
{
    int m, n, i, j;
    printf("Enter number of rows and column in the matrix\n");
    scanf("%d%d",&m,&n);
    int mat[m][n];
    for(i=0;i<m;i++)
    {
        printf("Enter elements of row %d\n",i+1);
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("  %d",3*mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
