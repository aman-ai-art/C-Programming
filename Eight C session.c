#include<stdio.h>
    int main()
        {
            float unit;
            printf("Enter the electricity consumed in units\n");
            scanf("%f",&unit);
            if(unit<=20)
            {
                float a=(unit*4);
                printf("The charge of the electricity consumed is %.2f",a);
            }
            else if(unit<=100)
            {
                float b=(80+(unit-20)*7.5);
                printf("The charge of the electricity consumed is %.2f",b);
            }
            else if(unit<=200)
            {
                float c=((80+(unit-20)*7.5)+(unit-100)*8.5);
                printf("The charge of the electricity consumed is %.2f",c);
            }
            else
            {
                float d=(((80+(unit-20)*7.5)+(unit-100)*8.5)+(unit-200)*9.5)*1.15;
                printf("The charge of the electricity consumed is %.2f",d);
            }
            return 0;
        }
