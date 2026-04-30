#include<stdio.h>
     int main()
     {
         int i, n, j, temp=0;
         printf("Enter the number of students\n");
         scanf("%d",&n);
         int num[n];
         printf("Enter the marks of the students\n");
         for(i=0;i<n;i++)
         {
             scanf("%d",&num[i]);
         }
         for(i=0;i<n;i++)
         {
             for(j=0;j<n-i-1;j++)
             {
                 if(num[j]<num[j+1])
                 {
                     temp=num[j];
                     num[j]=num[j+1];
                     num[j+1]=temp;
                 }
             }
         }
         printf("The marks of the top 5 students of the class are:\n");
         for(i=0;i<5;i++)
         {
         printf("%d. %d\n",i+1, num[i]);
         }
        return 0;
     }
