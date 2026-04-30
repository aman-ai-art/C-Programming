#include<stdio.h>
int main()
{
    int i, m, n, j, v, flag=0, mat[50][50];
    printf("Enter the order of the matrix\n");
    scanf("%d%d",&m, &n);
    printf("Enter elements\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Enter the variable to be searched\n");
    scanf("%d",&v);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(mat[i][j]==v)
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            break;
        }
    }
    if(flag)
    {
        printf("\nThe variable is found in the array\n");
    }
    else{printf("\nThe variable is not found\n");}
    return 0;
}
