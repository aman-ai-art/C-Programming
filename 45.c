#include<stdio.h>
int main()
{
     int mat1[10][10], mat2[10][10], i, j, check=1, m1, n1, m2, n2;
     printf("Order of matrix 1(<10): ");
     scanf("%d%d",&m1,&n1);
     printf("Order of matrix 2(<10): ");
     scanf("%d%d",&m2,&n2);
     printf("Enter the elements of the matrix 1\n");
     for(i=0;i<m1;i++)
     {
         for(j=0;j<n1;j++)
         {
             scanf("%d",&mat1[i][j]);
         }
     }
     printf("Enter the elements of the matrix 2\n");
     for(i=0;i<m2;i++)
     {
         for(j=0;j<n2;j++)
         {
             scanf("%d",&mat2[i][j]);
         }
     }
     if(m1==m2&&n1==n2)
     {
       for(i=0;i<m1;i++)
       {
           for(j=0;j<n1;j++)
           {
               if(mat1[i][j]!=mat2[i][j])
               {
                   check=0;
                   break;
               }
           }
           if(check==0)
           {
               break;
           }
       }
       if(check==1)
       {
           printf("\nThe matrix are equal\n");
       }
       else
       {
           printf("\nThe matrix are not equal\n");
       }
     }
     else
     {
         printf("\nThe matrix are not equal\n");
     }
     return 0;
}
