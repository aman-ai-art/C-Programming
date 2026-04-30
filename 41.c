#include<stdio.h>
#include<math.h>
    int main()
        {
        int i, n, j, flag=0, check;
        printf("Enter the number of elements\n");
        scanf("%d",&n);
        int num[n];
        printf("Enter the array elements\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
        }
        printf("Enter the element to be searched\n");
        scanf("%d",&check);
        for(i=0;i<n;i++)
        {
            if(check==num[i])
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            printf("\nThe element is found in the array\n");
        }
        else
        {
            printf("\nThe element is not found in the array\n");
        }
        return 0;
        }
