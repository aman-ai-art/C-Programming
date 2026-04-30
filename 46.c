#include<stdio.h>
int main()
{
    int i, j, m, n, x, y, var, flag=0, A[10][10];
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
    printf("\nEnter the variable\n");
    scanf("%d",&var);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i][j]==var)
            {
                flag=1;
                x=i+1;
                y=j+1;
                break;
            }
        }
        if(flag==1)
        {
            printf("\nThe value is in the matrix in row %d and at the column %d\n",x,y);
            break;
        }
    }
    return 0;
}
