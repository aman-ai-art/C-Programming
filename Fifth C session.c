#include<stdio.h>
        int main()
                {
                    int i, n;
                    printf("Enter the last number\n");
                    scanf("%d",&n);
                    for(i=1;i<=n;i++)
                    {
                        if(i%2==1)
                        {
                            printf("\n%d\t",i);
                        }
                        else
                        {
                            printf("%d",i);
                        }

                    }
                    return 0;
                }
