#include<stdio.h>
int main()
{
    int i, j, m, n, A[10][10];
    printf("Enter the order of matrix\n");
    scanf("%d%d",&m,&n);
    printf("\nEnter the value of array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    if(m==n)
    {

    }
    else
    {
        printf("\n Operation not possible\n");
    }
    return 0;
}
