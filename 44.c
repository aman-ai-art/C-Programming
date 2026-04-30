#include<stdio.h>
    int main()
    {
        int m, n, i, j;
        printf("Enter the number of rows and columns\n");
        scanf("%d%d",&m,&n);
        int mat[m][n], sum=0, rsum[m], csum[n];
        for(i=0;i<m;i++)
        {
        printf("Enter elements of row %d\n",i+1);
        rsum[i]=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
            sum=sum+mat[i][j];
            rsum[i]=rsum[i]+mat[i][j];
        }
        }
        for(j=0;j<n;j++)
        {
            csum[j]=0;
            for(i=0;i<m;i++)
            {
            csum[j]=csum[j]+mat[i][j];
            }
        }
        printf("\nThe sum of all the elements is %d\n",sum);
        for(i=0;i<m;i++)
        {
            printf("\nThe sum of the elements of row %d is %d\n",i+1,rsum[i]);
        }
        for(i=0;i<n;i++)
        {
            printf("\nThe sum of the elements of column %d is %d\n",i+1,csum[i]);
        }
        return 0;
    }
