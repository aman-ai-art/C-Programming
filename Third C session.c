#include<Stdbool.h>
#include<stdio.h>
    int main()
        {
            int day;
            printf("Enter the day of the week(1-7)\n");
            scanf("%d",&day);
            switch(day)
                {
                case 1:
                    printf("The day is Sunday\n");
                    break;
                case 2:
                    printf("The day is Monday\n");
                    break;
                case 3:
                    printf("The day is Tuesday\n");
                    break;
                case 4:
                    printf("The day is Wednesday\n");
                    break;
                case 5:
                    printf("The day is Thursday\n");
                    break;
                case 6:
                    printf("The day is Friday\n");
                    break;
                case 7:
                    printf("The day is Saturday\n");
                    break;
                }
                return 0;
        }
